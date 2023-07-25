#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <filesystem>
#include <thread>
#include <atomic>
#include <mutex>
#include <chrono>
#include <cstdlib>
#include <signal.h>
#include <new>

#ifdef __GNUC__
  #include <unistd.h>
#else
  #include <io.h>
  #define isatty _isatty
#endif

#ifdef __cpp_lib_hardware_interference_size
    using std::hardware_constructive_interference_size;
    using std::hardware_destructive_interference_size;
#else
    // 64 bytes on x86-64 │ L1_CACHE_BYTES │ L1_CACHE_SHIFT │ __cacheline_aligned │ ...
    constexpr std::size_t hardware_constructive_interference_size = 64;
    constexpr std::size_t hardware_destructive_interference_size = 64;
#endif

std::string rootPath = "";

std::mutex outputLock;
std::mutex fileLock;

uint32_t masterTmp[64]{ 0 };
uint32_t maxPos = sizeof(masterTmp) / sizeof(uint32_t);
uint32_t minPos = 0;

uint32_t hashType = 0;
bool terminating = false;
bool outputLog = false;
bool paired = false, usingFieldTypeMap = false;

std::vector<std::string> subdict[64];
std::vector<std::string> dict;
std::unordered_map<uint32_t, std::vector<uint32_t>> fieldTypeMap;
std::unordered_map<uint32_t, std::unordered_set<std::string>> typePrefixes;

unsigned int maxThreads = std::thread::hardware_concurrency(), threadLevel = 0;

struct alignas(hardware_constructive_interference_size) WorkerData {
  uint32_t tmp[64]{ 0 };
  long pos = 0;
  long max = 0;
  uint32_t currentChecksum = 0;
  std::thread *thread = nullptr;
  std::atomic_bool ready = true;
  std::atomic_bool stayReady = true;
  uint32_t threadIndex = 0;
  std::uint64_t hashCount = 0;
} pool[64];

uint32_t workerCount = maxThreads;
std::uint64_t hashCount = 0;
std::atomic_int64_t lastReport = 0;
auto start = std::chrono::steady_clock::now();

typedef std::unordered_set<uint32_t> ChecksumSetType;

void addChecksum(ChecksumSetType &checksumSet, uint32_t hash) {
  checksumSet.insert(hash);
}

bool hasChecksum(ChecksumSetType &checksumSet, uint32_t hash) {
  return checksumSet.count(hash) > 0;
}

ChecksumSetType checksumMatch;
ChecksumSetType checksumMatchSecondary;

uint32_t typeChecksum(const std::string &str, uint32_t hash) {
  for (size_t i = 0; i < str.length(); i++) {
    hash = (hash << 5) + hash + (unsigned char)str[i];
  }

  // field names have an additional mask
  return hash;
}

uint32_t fieldChecksum(const std::string &str, uint32_t hash) {
  for (size_t i = 0; i < str.length(); i++) {
    hash = (hash << 5) + hash + (unsigned char)str[i];
  }

  // field names have an additional mask
  return hash & 0xfffffff;
}

uint32_t gbidChecksum(const std::string &str, uint32_t hash) {
  for (size_t i = 0; i < str.length(); i++) {
    hash = (hash << 5) + hash + (unsigned char)std::tolower(str[i]);
  }

  // field names have an additional mask
  return hash;
}

uint32_t (*checksum)(const std::string &str, uint32_t hash) = typeChecksum;

auto getDictSize(long pos, long max) {
  // If suffixes exist, use those.
  if (subdict[63].size() > 0 && pos == max - 1) {
    pos = 63;
  }

  // If positional dict overrides exist, use those.
  const auto subdictSize = subdict[pos].size();
  if (subdictSize > 0) {
    return subdictSize;
  }

  return dict.size();
}

const std::string &getDictEntry(long index, long pos, long max) {
  // If suffixes exist, use those.
  if (subdict[63].size() > 0 && pos == max - 1) {
    pos = 63;
  }

  // If positional dict overrides exist, use those.
  const auto &subdictEntry = subdict[pos];
  if (!subdictEntry.empty()) {
    return subdictEntry[index];
  }

  return dict[index];
}

std::string getWord(uint32_t *tmp, int32_t max) {
  std::string ret;

  for (int32_t pos = 0; pos < max; pos++) {
    ret += getDictEntry(tmp[pos], pos, max);
  }

  return ret;
}

bool checkPaired(uint32_t *tmp, int32_t max) {
  if (!paired) {
    return true;
  }

  if (hashType == 0) {
    std::string word = getWord(tmp, max);
    uint32_t wordChecksum = fieldChecksum("t" + word, 0);

    if (hasChecksum(checksumMatchSecondary, wordChecksum)) {
      return true;
    }

    wordChecksum = fieldChecksum("pt" + word, 0);
    if (hasChecksum(checksumMatchSecondary, wordChecksum)) {
      return true;
    }

    wordChecksum = fieldChecksum("ar" + word, 0);

    if (hasChecksum(checksumMatchSecondary, wordChecksum)) {
      return true;
    }

    wordChecksum = fieldChecksum("t" + word + "s", 0);

    if (hasChecksum(checksumMatchSecondary, wordChecksum)) {
      return true;
    }

    wordChecksum = fieldChecksum("pt" + word + "s", 0);

    if (hasChecksum(checksumMatchSecondary, wordChecksum)) {
      return true;
    }

    wordChecksum = fieldChecksum("ar" + word + "s", 0);

    if (hasChecksum(checksumMatchSecondary, wordChecksum)) {
      return true;
    }
  }


  return false;
}

bool correctType(uint32_t *tmp, uint32_t currentChecksum) {
  if (!usingFieldTypeMap || subdict[0].size() < 1) {
    return true;
  }

  if (fieldTypeMap[currentChecksum].size() < 1) {
    currentChecksum = 0;
  }

  for (uint32_t typeHash : fieldTypeMap[currentChecksum]) {
    const auto &prefixes = typePrefixes[typeHash];
    if (!prefixes.empty()) {
      return prefixes.count(subdict[0][tmp[0]]) > 0;
    }
    else {
      return false; //typePrefixes[0].count(subdict[0][tmp[0]]) > 0;
    }
  }

  return false;
}

void collisions(uint32_t *tmp, long pos, long max, uint32_t currentChecksum, uint64_t &hashCount, bool useThread) {
  if (terminating) {
    return;
  }

  if (useThread) {
    for (uint32_t threadIndex = 0; true; threadIndex = (threadIndex + 1) % workerCount) {
      if (pool[threadIndex].ready) {
        for (uint32_t i = 0; i < 64; i++) {
          pool[threadIndex].tmp[i] = masterTmp[i];
        }

        pool[threadIndex].pos = pos;
        pool[threadIndex].max = max;
        pool[threadIndex].currentChecksum = currentChecksum;
        pool[threadIndex].ready = false;

        return;
      }
    }
  }

  if (pos >= max) {
    hashCount++;

    if(hasChecksum(checksumMatch, currentChecksum) && checkPaired(tmp, max) && correctType(tmp, currentChecksum)) {
      std::string word = getWord(tmp, max);

      outputLock.lock();
      std::cout << "  " << std::hex << currentChecksum << ": " << word << std::endl;
      outputLock.unlock();

      if (outputLog) {
        std::stringstream outfilePath;

        if (hashType == 0) {
          outfilePath << "type/";
        }
        else if (hashType == 1) {
          outfilePath << "field/";
        }
        else if (hashType == 2) {
          outfilePath << "gbid/";
        }

        outfilePath << std::hex << currentChecksum << ".yml";

        fileLock.lock();
        std::ofstream outfile(outfilePath.str(), std::ios::app);
        outfile << std::hex << currentChecksum << ": " << word << std::endl;
        outfile.close();
        fileLock.unlock();
      }
    }

    return;
  }

  long cmax = getDictSize(pos, max);

  for (long c = 0; c < cmax && !terminating; c++) {
    tmp[pos] = c;
    uint32_t newChecksum = checksum(getDictEntry(c, pos, max), currentChecksum);
    collisions(tmp, pos + 1, max, newChecksum, hashCount, workerCount > 1 && pos == threadLevel);
  }
}

void collisionWorker(WorkerData *workerData) {
  while (workerData->stayReady && !terminating) {
    if (!workerData->ready) {
      collisions(workerData->tmp, workerData->pos, workerData->max, workerData->currentChecksum, workerData->hashCount, false);
      workerData->ready = true;
    }
  }
}

const std::string defaultDictLowerCase[] {
    "a",
    "b",
    "c",
    "d",
    "e",
    "f",
    "g",
    "h",
    "i",
    "j",
    "k",
    "l",
    "m",
    "n",
    "o",
    "p",
    "q",
    "r",
    "s",
    "t",
    "u",
    "v",
    "w",
    "x",
    "y",
    "z",
};
const std::string defaultDictUpperCase[] {
    "A",
    "B",
    "C",
    "D",
    "E",
    "F",
    "G",
    "H",
    "I",
    "J",
    "K",
    "L",
    "M",
    "N",
    "O",
    "P",
    "Q",
    "R",
    "S",
    "T",
    "U",
    "V",
    "W",
    "X",
    "Y",
    "Z",
};
const std::string defaultDictNumbers[] {
    "0",
    "1",
    "2",
    "3",
    "4",
    "5",
    "6",
    "7",
    "8",
    "9",
};
const std::string defaultDictSpecial[] {
    "_",
};

std::vector<std::string> getDict(std::string dictPathOrString) {
  std::vector<std::string> ret;

  std::ifstream dict(dictPathOrString);

  if (!dict) {
    dict.open("../" + dictPathOrString);
  }

  if (dict) {
    std::string line;

    while (std::getline(dict, line)) {
      if (line.empty() || line[0] == '#') {
        continue;
      }
      ret.push_back(line);
    }
  } else {
    std::cerr << "Dictionary " << dictPathOrString << " not found." << std::endl;
  }

  return ret;
}

bool isAllCaps(std::string elem) {
  if (elem.length() < 2) {
    return false;
  }

  for (int i = 0; i < elem.length(); i++) {
    if (elem[i] >= 'a' && elem[i] <= 'z') {
      return false;
    }
  }

  return true;
}

void loadFieldTypeMap (bool common = true) {
  std::ifstream fieldTypes("../field_types.txt");
  uint32_t v1 = 0, v2 = 0;

  usingFieldTypeMap = true;

  fieldTypes >> std::hex >> v1 >> std::hex >> v2;

  while (fieldTypes) {
    if (checksumMatch.count(v1) > 0 || checksumMatchSecondary.count(v1) > 0) {
      fieldTypeMap[v1].push_back(v2);
    }
    fieldTypes >> std::hex >> v1 >> std::hex >> v2;
  }

  fieldTypes.close();

  typePrefixes[0].insert("t"); // ?

  const auto HASH_0xf5ac91bb = 0xf5ac91bb; // no unknown left
  const auto HASH_AABB = typeChecksum("AABB", 0);
  const auto HASH_AxialCylinder = typeChecksum("AxialCylinder", 0);
  const auto HASH_DT_ACD_NETWORK_NAME = typeChecksum("DT_ACD_NETWORK_NAME", 0);
  const auto HASH_DT_BCVEC2I = typeChecksum("DT_BCVEC2I", 0);
  const auto HASH_DT_BYTE = typeChecksum("DT_BYTE", 0);
  const auto HASH_DT_CHARARRAY = typeChecksum("DT_CHARARRAY", 0);
  const auto HASH_DT_CSTRING = typeChecksum("DT_CSTRING", 0);
  const auto HASH_DT_ENUM = typeChecksum("DT_ENUM", 0);
  const auto HASH_DT_FIXEDARRAY = typeChecksum("DT_FIXEDARRAY", 0);
  const auto HASH_DT_FLOAT = typeChecksum("DT_FLOAT", 0);
  const auto HASH_DT_GBID = typeChecksum("DT_GBID", 0);
  const auto HASH_DT_INT = typeChecksum("DT_INT", 0);
  const auto HASH_DT_INT64 = typeChecksum("DT_INT64", 0);
  const auto HASH_DT_POLYMORPHIC_VARIABLEARRAY = typeChecksum("DT_POLYMORPHIC_VARIABLEARRAY", 0);
  const auto HASH_DT_RANGE = typeChecksum("DT_RANGE", 0);
  const auto HASH_DT_RGBACOLOR = typeChecksum("DT_RGBACOLOR", 0);
  const auto HASH_DT_RGBACOLORVALUE = typeChecksum("DT_RGBACOLORVALUE", 0);
  const auto HASH_DT_SHARED_SERVER_DATA_ID = typeChecksum("DT_SHARED_SERVER_DATA_ID", 0);
  const auto HASH_DT_SNO = typeChecksum("DT_SNO", 0);
  const auto HASH_DT_SNO_NAME = typeChecksum("DT_SNO_NAME", 0);
  const auto HASH_DT_STARTLOC_NAME = typeChecksum("DT_STARTLOC_NAME", 0);
  const auto HASH_DT_STRING_FORMULA = typeChecksum("DT_STRING_FORMULA", 0);
  const auto HASH_DT_TAGMAP = typeChecksum("DT_TAGMAP", 0);
  const auto HASH_DT_UINT = typeChecksum("DT_UINT", 0);
  const auto HASH_DT_VARIABLEARRAY = typeChecksum("DT_VARIABLEARRAY", 0);
  const auto HASH_DT_VECTOR2D = typeChecksum("DT_VECTOR2D", 0);
  const auto HASH_DT_VECTOR3D = typeChecksum("DT_VECTOR3D", 0);
  const auto HASH_DT_VECTOR4D = typeChecksum("DT_VECTOR4D", 0);
  const auto HASH_DT_WORD = typeChecksum("DT_WORD", 0);
  const auto HASH_GBHandle = typeChecksum("GBHandle", 0);
  const auto HASH_InterpolationPath_RGBAColor = typeChecksum("InterpolationPath_RGBAColor", 0);
  const auto HASH_InterpolationPath_float = typeChecksum("InterpolationPath_float", 0);
  const auto HASH_InterpolationPath_int32 = typeChecksum("InterpolationPath_int32", 0);
  const auto HASH_Matrix3x3 = typeChecksum("Matrix3x3", 0);
  const auto HASH_PRSTransform = typeChecksum("PRSTransform", 0);
  const auto HASH_PRTransform = typeChecksum("PRTransform", 0);
  const auto HASH_SharedServerWorldPlace = typeChecksum("SharedServerWorldPlace", 0); // no unknown left
  const auto HASH_SpeedTree8BranchWindLevel = typeChecksum("SpeedTree8BranchWindLevel", 0); // no unknown left
  const auto HASH_SpeedTree8RippleGroup = typeChecksum("SpeedTree8RippleGroup", 0); // no unknown left
  const auto HASH_Sphere = typeChecksum("Sphere", 0);
  const auto HASH_StringLabelHandleEx = typeChecksum("StringLabelHandleEx", 0);
  const auto HASH_UIControlHandle = typeChecksum("UIControlHandle", 0);
  const auto HASH_UIImageHandleReference = typeChecksum("UIImageHandleReference", 0);
  const auto HASH_VectorPath = typeChecksum("VectorPath", 0);
  const auto HASH_bcQuat = typeChecksum("bcQuat", 0);
  const auto HASH_dmTransformMirror = typeChecksum("dmTransformMirror", 0); // no unknown left


  // Fake type DT_BOOL
  const auto HASH_DT_BOOL = typeChecksum("DT_BOOL", 0);
  typePrefixes[HASH_DT_BOOL].insert("b");
  typePrefixes[HASH_DT_BOOL].insert("f");
  if (!common) typePrefixes[HASH_DT_BOOL].insert("m_b");
  if (!common) typePrefixes[HASH_DT_BOOL].insert("m_f");

  // Fake type DT_FLOAT_ARRAY
  const auto HASH_DT_FLOAT_ARRAY = typeChecksum("DT_FLOAT_ARRAY", 0);
  typePrefixes[HASH_DT_FLOAT_ARRAY].insert("af");

  // Rest of existing types.
  typePrefixes[HASH_AABB].insert("aabb");
  if (!common) typePrefixes[HASH_GBHandle].insert("h");
  typePrefixes[HASH_SharedServerWorldPlace].insert("wp");
  typePrefixes[HASH_StringLabelHandleEx].insert("h");
  typePrefixes[HASH_DT_BYTE].insert("dw");
  if (!common) typePrefixes[HASH_DT_BYTE].insert("u");
  if (!common) typePrefixes[HASH_DT_BYTE].insert("n");
  if (!common) typePrefixes[HASH_DT_BYTE].insert("game");
  if (!common) typePrefixes[HASH_DT_BYTE].insert("twin");
  typePrefixes[HASH_DT_ENUM].insert("e");
  if (!common) typePrefixes[HASH_DT_ENUM].insert("id");
  if (!common) typePrefixes[HASH_DT_ENUM].insert("n");
  if (!common) typePrefixes[HASH_DT_ENUM].insert("dw");
  typePrefixes[HASH_DT_GBID].insert("gbid");
  if (!common) typePrefixes[HASH_DT_GBID].insert("n");
  typePrefixes[HASH_DT_UINT].insert("dw");
  typePrefixes[HASH_DT_UINT].insert("h");
  typePrefixes[HASH_DT_UINT].insert("n");
  typePrefixes[HASH_DT_UINT].insert("sz");
  typePrefixes[HASH_DT_UINT].insert("u");
  if (!common) typePrefixes[HASH_DT_UINT].insert("s");
  if (!common) typePrefixes[HASH_DT_UINT].insert("id");
  if (!common) typePrefixes[HASH_DT_UINT].insert("w");
  if (!common) typePrefixes[HASH_DT_UINT].insert("sno");
  typePrefixes[HASH_DT_WORD].insert("bone");
  typePrefixes[HASH_DT_WORD].insert("dw");
  if (!common) typePrefixes[HASH_DT_WORD].insert("vertex");
  if (!common) typePrefixes[HASH_DT_WORD].insert("triangle");
  if (!common) typePrefixes[HASH_DT_WORD].insert("constraint");
  if (!common) typePrefixes[HASH_DT_WORD].insert("max");
  if (!common) typePrefixes[HASH_DT_WORD].insert("plane");
  typePrefixes[HASH_DT_WORD].insert("n");
  typePrefixes[HASH_DT_WORD].insert("u");
  if (!common) typePrefixes[HASH_DT_WORD].insert("m_bone");
  if (!common) typePrefixes[HASH_DT_WORD].insert("attachment");
  if (!common) typePrefixes[HASH_DT_WORD].insert("start");
  if (!common) typePrefixes[HASH_DT_WORD].insert("end");
  typePrefixes[HASH_InterpolationPath_RGBAColor].insert("path");
  typePrefixes[HASH_dmTransformMirror].insert("local");
  typePrefixes[HASH_dmTransformMirror].insert("m_local");
  typePrefixes[HASH_DT_POLYMORPHIC_VARIABLEARRAY].insert("ar");
  if (!common) typePrefixes[HASH_DT_POLYMORPHIC_VARIABLEARRAY].insert("arn");
  if (!common) typePrefixes[HASH_DT_POLYMORPHIC_VARIABLEARRAY].insert("arr");
  if (!common) typePrefixes[HASH_DT_POLYMORPHIC_VARIABLEARRAY].insert("at");
  typePrefixes[HASH_DT_POLYMORPHIC_VARIABLEARRAY].insert("pt");
  typePrefixes[HASH_UIImageHandleReference].insert("h");
  if (!common) typePrefixes[HASH_UIImageHandleReference].insert("ar");
  typePrefixes[HASH_DT_BCVEC2I].insert("vec");
  typePrefixes[HASH_DT_BCVEC2I].insert("p");
  typePrefixes[HASH_Matrix3x3].insert("m");
  typePrefixes[HASH_DT_CHARARRAY].insert("sz");
  typePrefixes[HASH_DT_CHARARRAY].insert("us");
  typePrefixes[HASH_DT_STARTLOC_NAME].insert("u");
  typePrefixes[HASH_DT_STARTLOC_NAME].insert("dw");
  typePrefixes[HASH_DT_RGBACOLOR].insert("rgba");
  if (!common) typePrefixes[HASH_DT_RGBACOLOR].insert("fl");
  typePrefixes[HASH_DT_FIXEDARRAY].insert("ar");
  if (!common) typePrefixes[HASH_DT_FIXEDARRAY].insert("arn");
  if (!common) typePrefixes[HASH_DT_FIXEDARRAY].insert("arr");
  if (!common) typePrefixes[HASH_DT_FIXEDARRAY].insert("at");
  typePrefixes[HASH_DT_FIXEDARRAY].insert("pt");
  typePrefixes[HASH_DT_STRING_FORMULA].insert("v");
  typePrefixes[HASH_DT_STRING_FORMULA].insert("sz");
  typePrefixes[HASH_PRTransform].insert("local");
  typePrefixes[HASH_VectorPath].insert("path");
  if (!common) typePrefixes[HASH_DT_INT].insert("count");
  typePrefixes[HASH_DT_INT].insert("dw");
  if (!common) typePrefixes[HASH_DT_INT].insert("e");
  if (!common) typePrefixes[HASH_DT_INT].insert("i");
  if (!common) typePrefixes[HASH_DT_INT].insert("id");
  if (!common) typePrefixes[HASH_DT_INT].insert("is");
  if (!common) typePrefixes[HASH_DT_INT].insert("m_");
  if (!common) typePrefixes[HASH_DT_INT].insert("m_bone");
  if (!common) typePrefixes[HASH_DT_INT].insert("m_face");
  if (!common) typePrefixes[HASH_DT_INT].insert("m_plane");
  if (!common) typePrefixes[HASH_DT_INT].insert("m_vertex");
  typePrefixes[HASH_DT_INT].insert("n");
  if (!common) typePrefixes[HASH_DT_INT].insert("sample");
  if (!common) typePrefixes[HASH_DT_INT].insert("sno");
  if (!common) typePrefixes[HASH_DT_INT].insert("w");
  typePrefixes[HASH_DT_SNO].insert("sno");
  if (!common) typePrefixes[HASH_DT_SNO].insert("h");
  typePrefixes[HASH_DT_ACD_NETWORK_NAME].insert("ann");
  if (!common) typePrefixes[HASH_DT_ACD_NETWORK_NAME].insert("m_ann");
  typePrefixes[HASH_AxialCylinder].insert("wcyl");
  typePrefixes[HASH_DT_SHARED_SERVER_DATA_ID].insert("id");
  typePrefixes[HASH_UIControlHandle].insert("h");
  typePrefixes[HASH_DT_VECTOR2D].insert("v");
  typePrefixes[HASH_DT_VECTOR2D].insert("vec");
  if (!common) typePrefixes[HASH_DT_VECTOR2D].insert("wp");
  if (!common) typePrefixes[HASH_DT_VECTOR2D].insert("wv");
  typePrefixes[HASH_DT_VECTOR3D].insert("wv");
  typePrefixes[HASH_DT_VECTOR3D].insert("wp");
  typePrefixes[HASH_DT_VECTOR3D].insert("v");
  typePrefixes[HASH_DT_VECTOR3D].insert("vec");
  if (!common) typePrefixes[HASH_DT_VECTOR4D].insert("inv");
  if (!common) typePrefixes[HASH_DT_VECTOR4D].insert("m_inv");
  if (!common) typePrefixes[HASH_DT_VECTOR4D].insert("pt");
  typePrefixes[HASH_DT_VECTOR4D].insert("v");
  if (!common) typePrefixes[HASH_DT_VECTOR4D].insert("vec");
  typePrefixes[HASH_DT_RGBACOLORVALUE].insert("rgbaval");
  typePrefixes[HASH_DT_VARIABLEARRAY].insert("ar");
  if (!common) typePrefixes[HASH_DT_VARIABLEARRAY].insert("arn");
  if (!common) typePrefixes[HASH_DT_VARIABLEARRAY].insert("arr");
  if (!common) typePrefixes[HASH_DT_VARIABLEARRAY].insert("at");
  typePrefixes[HASH_DT_VARIABLEARRAY].insert("pt");
  typePrefixes[HASH_DT_SNO_NAME].insert("snoname");
  typePrefixes[HASH_DT_SNO_NAME].insert("sno");
  typePrefixes[HASH_Sphere].insert("ws");
  typePrefixes[HASH_InterpolationPath_float].insert("path");
  typePrefixes[HASH_SpeedTree8BranchWindLevel].insert("s");
  typePrefixes[HASH_DT_TAGMAP].insert("m_e");
  if (!common) typePrefixes[HASH_DT_TAGMAP].insert("h");
  typePrefixes[HASH_DT_CSTRING].insert("sz");
  if (!common) typePrefixes[HASH_DT_CSTRING].insert("n");
  typePrefixes[HASH_DT_CSTRING].insert("s");
  typePrefixes[HASH_SpeedTree8RippleGroup].insert("s");
  if (!common) typePrefixes[HASH_DT_FLOAT].insert("a");
  typePrefixes[HASH_DT_FLOAT].insert("f");
  typePrefixes[HASH_DT_FLOAT].insert("fl");
  if (!common) typePrefixes[HASH_DT_FLOAT].insert("wd");
  typePrefixes[HASH_DT_INT64].insert("a");
  if (!common) typePrefixes[HASH_DT_INT64].insert("blend");
  if (!common) typePrefixes[HASH_DT_INT64].insert("constraint");
  typePrefixes[HASH_DT_INT64].insert("dw");
  if (!common) typePrefixes[HASH_DT_INT64].insert("follower");
  typePrefixes[HASH_DT_INT64].insert("m_a");
  if (!common) typePrefixes[HASH_DT_INT64].insert("m_cell");
  typePrefixes[HASH_DT_INT64].insert("n");
  if (!common) typePrefixes[HASH_DT_INT64].insert("pn");
  typePrefixes[HASH_DT_INT64].insert("pt");
  if (!common) typePrefixes[HASH_DT_INT64].insert("sz");
  typePrefixes[HASH_DT_INT64].insert("u");
  typePrefixes[HASH_DT_RANGE].insert("fl");
  typePrefixes[HASH_bcQuat].insert("q");
  typePrefixes[HASH_PRSTransform].insert("transform");
  typePrefixes[HASH_0xf5ac91bb].insert("id");
  typePrefixes[HASH_0xf5ac91bb].insert("t");
  typePrefixes[HASH_InterpolationPath_int32].insert("path");
}

#ifdef _WIN32
#include <Windows.h>
BOOL WINAPI CtrlHandler(DWORD fdwCtrlType)
{
  if (fdwCtrlType == CTRL_C_EVENT) {
    terminating = true;
    return true;
  }

  return false;
}
#else
void signal_callback_handler(int signum) {
  terminating = true;
}
#endif

int main(int argc, char *argv[]) {
  uint32_t gettingSubDict = 0;
  uint32_t subDictPos = 0;

  std::string dictPathOrString = "../dict.txt";

  bool gettingMin = false;
  bool gettingMax = false;
  bool useDict = true;
  bool wordsOnly = false;
  bool noPrefix = false;
  bool ignoreAllCaps = true;
  bool gettingThreads = false;
  bool gettingDict = false;
  bool useCommonPrefixes = true;
  bool literalDict = false;
  bool forceProvidedHashes = false;

#ifdef _WIN32
  SetConsoleCtrlHandler(CtrlHandler, TRUE);
#else
  signal(SIGINT, &signal_callback_handler);
  signal(SIGTERM, &signal_callback_handler);
#endif

  int pos = 0;

  for (int c = 0; argv[0][c] && c < 128; c++) {
    if (argv[0][c] == '/' || argv[0][c] == '\\') {
      pos = c;
    }
  }

  if (pos > 0) {
    rootPath = std::string(argv[0], pos);
    std::filesystem::current_path(rootPath);
  }

  if (argc > 1) {
    for (int c = 1; c < argc; c++) {
      std::string arg = argv[c];

      if(arg == "--field") {
        hashType = 1;
      }
      else if(arg == "--gbid") {
        hashType = 2;
      }
      else if(arg == "--prefix") {
        gettingSubDict = 2;
        subDictPos = 0;
      }
      else if(arg == "--suffix") {
        gettingSubDict = 2;
        subDictPos = 63;
      }
      else if(arg == "--subdict") {
        gettingSubDict = 1;
      }
      else if(arg == "--no-prefix") {
        subdict[0].clear();
        noPrefix = true;
      }
      else if(arg == "--words-only") {
        wordsOnly = true;
      }
      else if(arg == "--allow-all-caps") {
        ignoreAllCaps = false;
      }
      else if(arg == "--min") {
        gettingMin = true;
      }
      else if(arg == "--max") {
        gettingMax = true;
      }
      else if(arg == "--log") {
        outputLog = true;
      }
      else if(arg == "--no-dict") {
        useDict = false;
      }
      else if(arg == "--paired") {
        paired = true;
      }
      else if(arg == "--common") {
        useCommonPrefixes = true;
      }
      else if(arg == "--uncommon") {
        useCommonPrefixes = false;
      }
      else if(arg == "--english") {
        dictPathOrString = "../english_dict.txt";
      }
      else if(arg == "--expanded") {
        dictPathOrString = "../dict_expanded.txt";
      }
      else if(arg == "--dict") {
        gettingDict = true;
      }
      else if(arg == "--literal") {
        literalDict = true;
      }
      else if(arg == "--force") {
        forceProvidedHashes = true;
      }
      else if(arg == "--threads") {
        gettingThreads = true;
      }
      else if(arg[0] == '-') {
        std::cerr << "Error: Unknown option: " << arg << "\n";
        return 1;
      }
      else if(gettingSubDict == 1) {
        std::stringstream ss;

        ss << arg;
        ss >> subDictPos;

        gettingSubDict = 2;
      }
      else if(gettingSubDict == 2) {
        if (arg.length()) {
          std::stringstream ss;
          std::string str;

          ss << arg;
          ss >> str;

          while (ss) {
            subdict[subDictPos].push_back(str);
            ss >> str;
          }
        }
        else {
          subdict[subDictPos].push_back(arg);
        }

        gettingSubDict = 0;
      }
      else if(gettingMin) {
        uint32_t uTmp = 0;
        std::stringstream ss;

        ss << arg;
        ss >> uTmp;

        if (uTmp >= 1 && uTmp < sizeof(masterTmp) / sizeof(uint32_t)) {
          minPos = uTmp - 1;
          std::cerr << "Using min of " << minPos << std::endl;
        }

        gettingMin = false;
      }
      else if(gettingMax) {
        uint32_t uTmp = 0;
        std::stringstream ss;

        ss << arg;
        ss >> uTmp;

        if (uTmp >= 1 && uTmp < sizeof(masterTmp) / sizeof(uint32_t)) {
          maxPos = uTmp;
          std::cerr << "Using max of " << maxPos << std::endl;
        }

        gettingMax = false;
      }
      else if(gettingThreads) {
        uint32_t uTmp = 0;
        std::stringstream ss;

        ss << arg;
        ss >> uTmp;

        workerCount = uTmp;

        if (workerCount < 1) {
          workerCount = 1;
        }
        else if (workerCount > 64) {
          workerCount = 64;
        }

        gettingThreads = false;
      }
      else if(gettingDict) {
        dictPathOrString = arg;
        gettingDict = false;
      }
      else {
        uint32_t uTmp = 0;
        std::stringstream ss;

        ss << std::hex << arg;
        ss >> uTmp;
        addChecksum(checksumMatch, uTmp);
      }
    }
  }

  if (hashType == 1) {
    checksum = fieldChecksum;
  }
  else if (hashType == 2) {
    checksum = gbidChecksum;
  }

  if (!isatty(0)) {
    size_t uTmp;
    std::cin >> std::hex >> uTmp;

    while (std::cin) {
      addChecksum(checksumMatch, uTmp);
      std::cin >> std::hex >> uTmp;
    }
  }

  ChecksumSetType checksumUnfound;
  if (hashType == 0) {
    std::ifstream hashes("../unfound_hashes.txt");
    size_t uTmp;
    hashes >> std::hex >> uTmp;

    while (hashes) {
      addChecksum(checksumUnfound, uTmp);
      hashes >> std::hex >> uTmp;
    }
  } else if (hashType == 1) {
    std::ifstream hashes("../unfound_field_hashes.txt");
    size_t uTmp;

    hashes >> std::hex >> uTmp;
    while (hashes) {
      addChecksum(checksumUnfound, uTmp);
      hashes >> std::hex >> uTmp;
    }
  }

  bool checksumProvided = false;
  if (checksumMatch.empty()) {
    checksumMatch = checksumUnfound;
  } else {
    checksumProvided = true;
    // remove already known hashes
    if (!forceProvidedHashes) {
      for (auto it = checksumMatch.begin(), itEnd = checksumMatch.end(); it != itEnd; ) {
        if (checksumUnfound.count(*it) == 0) {
          std::cout << "removing already known hash: " << std::hex << *it << "\n";
          it = checksumMatch.erase(it);
        } else {
          ++it;
        }
      }
      std::cout << std::dec << std::endl;
    }
  }

  if (paired && hashType == 0) {
    std::ifstream hashes("../unfound_field_hashes.txt");
    size_t uTmp;

    hashes >> std::hex >> uTmp;
    while (hashes) {
      addChecksum(checksumMatchSecondary, uTmp);
      hashes >> std::hex >> uTmp;
    }
  } else {
    paired = false;
  }

  std::unordered_map<std::string, bool> dictmap;
  auto addDictEntry = [&dictmap](const std::string &entry) {
      if (!dictmap[entry]) {
          dictmap[entry] = true;
          dict.push_back(entry);
      }
  };

  if (useDict) {
    auto populateDict = [&](const std::string &dictFilePath) {
        for (const auto &baseelem : getDict(dictFilePath)) {
            if (baseelem.length() > 1 || wordsOnly) {
                if (literalDict) {
                    addDictEntry(baseelem);
                    continue;
                }

                if (ignoreAllCaps && isAllCaps(baseelem)) {
                    continue;
                }

                std::string elemLower = baseelem;
                std::transform(elemLower.begin(), elemLower.end(), elemLower.begin(), [](unsigned char c){ return std::tolower(c); });

                if (hashType == 2) {
                    addDictEntry(elemLower);
                    continue;
                }

                std::string elem = baseelem;
                if (elem == elemLower) {
                    std::string elemUpper = elem;
                    std::transform(elemUpper.begin(), elemUpper.end(), elemUpper.begin(), [](unsigned char c){ return std::toupper(c); });
                    elem = elemUpper.substr(0, 1) + elemLower.substr(1);
                }

                addDictEntry(elem);
            }
        }
    };

    if (dictPathOrString == "../english_dict.txt") {
      populateDict("../dict.txt");
    }

    populateDict(dictPathOrString);
  }

  if (!wordsOnly || !useDict) {
    if (hashType != 2) {
      std::for_each(std::cbegin(defaultDictUpperCase), std::cend(defaultDictUpperCase), addDictEntry);
    }

    std::for_each(std::cbegin(defaultDictLowerCase), std::cend(defaultDictLowerCase), addDictEntry);
    std::for_each(std::cbegin(defaultDictNumbers), std::cend(defaultDictNumbers), addDictEntry);
    std::for_each(std::cbegin(defaultDictSpecial), std::cend(defaultDictSpecial), addDictEntry);
  }

  if (hashType == 1) {
    if (noPrefix) {
      if (!literalDict && subdict[0].size() < 1) {
        std::transform(dict.cbegin(), dict.cend(), std::back_inserter(subdict[0]), [](std::string s) {
          if (!s.empty()) {
              s[0] = std::tolower(s[0]);
          }
    
          return s;
        });
      }
    } else if (subdict[0].empty() || !checksumProvided) {
      loadFieldTypeMap(useCommonPrefixes);

      if (subdict[0].size() < 1) {
        std::unordered_map<std::string, bool> prefixMap;

        for (const auto &fieldEntry : fieldTypeMap) {
          if (hasChecksum(checksumMatch, fieldEntry.first) || hasChecksum(checksumMatchSecondary, fieldEntry.first)) {
            for (const auto &typeHash : fieldEntry.second) {
              if (typePrefixes[typeHash].size()) {
                for (const auto &prefix : typePrefixes[typeHash]) {
                  prefixMap[prefix] = true;
                }
              }
              else {
                for (const auto &prefix : typePrefixes[0]) {
                  prefixMap[prefix] = true;
                }
              }
            }
          }
        }

        for (const auto &prefixMapEntry : prefixMap) {
          subdict[0].push_back(prefixMapEntry.first);
        }
      }

      std::unordered_set<uint32_t> typesReferenced;

      for (uint32_t hash : checksumMatch) {
        for (uint32_t typeHash : fieldTypeMap[hash]) {
          typesReferenced.insert(typeHash);
        }
      }

      if (typesReferenced.size() == 1) {
        usingFieldTypeMap = false;
      }
    }
  }

  workerCount -= 1;

  for (uint64_t c = 0, threadPotential = getDictSize(c, 64); c < 64; c++, threadPotential *= getDictSize(c, 64)) {
    if (threadPotential >= threadLevel && threadPotential >= workerCount) {
      threadLevel = c;
      break;
    }
  }

  if (checksumMatch.size()) {
    std::cerr << "Type prefix size: " << typePrefixes.size() << std::endl;
    std::cerr << "Prefix size: " << subdict[0].size() << std::endl;
    std::cerr << "Dictionary size: " << dict.size() << std::endl;
    std::cerr << "Suffix size: " << subdict[63].size() << std::endl;
    std::cerr << "Matching " << checksumMatch.size() << " hashes." << std::endl;

    if (workerCount > 1) {
      std::cerr << "Using " << (workerCount + 1) << " workers." << std::endl;
    }

    for (uint32_t c = 0; c < workerCount; c++) {
      pool[c].thread = new std::thread(collisionWorker, &pool[c]);
      pool[c].threadIndex = c;
    }

    start = std::chrono::steady_clock::now();

    for (uint32_t c = minPos; c < maxPos && !terminating; c++) {
      outputLock.lock();
      std::cerr << "Length: " << (c + 1) << std::endl;
      outputLock.unlock();
      collisions(masterTmp, 0, c + 1, 0, hashCount, false);
    }

    for (uint32_t c = 0; c < workerCount; c++) {
      if (pool[c].thread) {
        pool[c].stayReady = false;
        pool[c].thread->join();
        hashCount += pool[c].hashCount;
      }
    }

    auto seconds = (float)std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::steady_clock::now() - start).count() / 1000000.f;

    if (seconds > 0 && hashCount > 0) {
      float hashRate = (float)hashCount / seconds;

      if (hashRate >= 1000000.f) {
        std::cerr << std::endl << std::endl << "Hash rate: " << (hashRate / 1000000.f) << "M/s" << std::endl;
      }
      else if (hashRate >= 1000.f) {
        std::cerr << std::endl << std::endl << "Hash rate: " << (hashRate / 1000.f) << "K/s" << std::endl;
      }
      else {
        std::cerr << std::endl << std::endl << "Hash rate: " << hashRate << "/s" << std::endl;
      }
    }
  }

  return 0;
}
