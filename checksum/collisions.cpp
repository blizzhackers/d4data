#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <unordered_set>
#include <unistd.h>
#include <algorithm>
#include <filesystem>
#include <thread>
#include <atomic>
#include <mutex>
#include <chrono>
#include <cstdlib>
#include <signal.h>
#include <new>

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

std::unordered_set<uint32_t> checksumMatch;
std::unordered_set<uint32_t> checksumMatchSecondary;
uint32_t hashType = 0;
bool terminating = false;
bool outputLog = false;
bool paired = false, usingFieldTypeMap = false;

std::vector<std::string> subdict[64];
std::vector<std::string> dict;
std::unordered_map<std::string, bool> stringUsed;
std::unordered_map<uint32_t, std::vector<uint32_t>> fieldTypeMap;
std::unordered_map<uint32_t, std::unordered_set<std::string>> typePrefixes;

unsigned int maxThreads = std::thread::hardware_concurrency(), threadLevel = 0;

struct alignas(hardware_constructive_interference_size) WorkerData {
  alignas(hardware_destructive_interference_size) uint32_t tmp[64]{ 0 };
  alignas(hardware_destructive_interference_size) long pos = 0;
  alignas(hardware_destructive_interference_size) long max = 0;
  alignas(hardware_destructive_interference_size) uint32_t currentChecksum = 0;
  alignas(hardware_destructive_interference_size) std::thread *thread = nullptr;
  alignas(hardware_destructive_interference_size) std::atomic_bool ready = true;
  alignas(hardware_destructive_interference_size) uint32_t threadIndex = 0;
} pool[64];

uint32_t workerCount = maxThreads;
std::atomic_int64_t hashCount = 0;
std::atomic_int64_t lastReport = 0;
auto start = std::chrono::steady_clock::now();

uint32_t typeChecksum(std::string str, uint32_t hash) {
  for (size_t i = 0; i < str.length(); i++) {
    hash = (hash << 5) + hash + (unsigned char)str[i];
  }

  // field names have an additional mask
  return hash;
}

uint32_t fieldChecksum(std::string str, uint32_t hash) {
  for (size_t i = 0; i < str.length(); i++) {
    hash = (hash << 5) + hash + (unsigned char)str[i];
  }

  // field names have an additional mask
  return hash & 0xfffffff;
}

uint32_t gbidChecksum(std::string str, uint32_t hash) {
  std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c){ return std::tolower(c); });

  for (size_t i = 0; i < str.length(); i++) {
    hash = (hash << 5) + hash + (unsigned char)str[i];
  }

  // field names have an additional mask
  return hash;
}

uint32_t (*checksum)(std::string str, uint32_t hash) = typeChecksum;

auto getDictSize(long pos, long max) {
  // If suffixes exist, use those.
  if (subdict[63].size() > 0 && pos == max - 1) {
    pos = 63;
  }

  // If positional dict overrides exist, use those.
  if (subdict[pos].size() > 0) {
    return subdict[pos].size();
  }

  return dict.size();
}

std::string getDictEntry(long index, long pos, long max) {
  // If suffixes exist, use those.
  if (subdict[63].size() > 0 && pos == max - 1) {
    pos = 63;
  }

  // If positional dict overrides exist, use those.
  if (subdict[pos].size() > 0) {
    return subdict[pos][index];
  }

  return dict[index];
}

std::string getWord(uint32_t *tmp, int32_t max) {
  std::string ret = "";

  for (int32_t pos = 0; pos < max; pos++) {
    ret = ret + getDictEntry(tmp[pos], pos, max);
  }

  return ret;
}

bool hasCaps(std::string word) {
  for (uint32_t c = 0; c < word.size(); c++) {
    if (word[c] >= 'A' && word[c] <= 'Z') {
      return true;
    }
  }

  return false;
}

bool checkPaired(uint32_t *tmp, int32_t max) {
  if (!paired) {
    return true;
  }

  if (hashType == 0) {
    std::string word = getWord(tmp, max);
    uint32_t wordChecksum = fieldChecksum("t" + word, 0);

    if (checksumMatchSecondary.count(wordChecksum) > 0) {
      return true;
    }

    wordChecksum = fieldChecksum("pt" + word, 0);
    if (checksumMatchSecondary.count(wordChecksum) > 0) {
      return true;
    }

    wordChecksum = fieldChecksum("ar" + word, 0);

    if (checksumMatchSecondary.count(wordChecksum) > 0) {
      return true;
    }

    wordChecksum = fieldChecksum("t" + word + "s", 0);

    if (checksumMatchSecondary.count(wordChecksum) > 0) {
      return true;
    }

    wordChecksum = fieldChecksum("pt" + word + "s", 0);

    if (checksumMatchSecondary.count(wordChecksum) > 0) {
      return true;
    }

    wordChecksum = fieldChecksum("ar" + word + "s", 0);

    if (checksumMatchSecondary.count(wordChecksum) > 0) {
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
    if (typePrefixes[typeHash].count(subdict[0][tmp[0]]) > 0) {
      return true;
    }
  }

  return false;
}

void collisions(uint32_t *tmp, long pos, long max, uint32_t currentChecksum, bool useThread) {
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

    if(checksumMatch.count(currentChecksum) > 0 && checkPaired(tmp, max) && correctType(tmp, currentChecksum)) {
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
    collisions(tmp, pos + 1, max, newChecksum, workerCount > 1 && pos == threadLevel);
  }
}

void collisionWorker(WorkerData *workerData) {
  while (!terminating) {
    if (!workerData->ready) {
      collisions(workerData->tmp, workerData->pos, workerData->max, workerData->currentChecksum, false);
      workerData->ready = true;
    }
  }
}

std::vector<std::string> defaultDict {
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
  "_",
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

std::vector<std::string> getDict(bool english = false) {
  std::vector<std::string> ret;

  {
    std::ifstream dict("../dict.txt");
    std::string tmp;

    dict >> tmp;
    while (dict) {
      ret.push_back(tmp);
      dict >> tmp;
    }
  }

  if (english) {
    std::ifstream dict("../english_dict.txt");
    std::string tmp;

    dict >> tmp;
    while (dict) {
      ret.push_back(tmp);
      dict >> tmp;
    }
  }

  return ret;
}

std::vector<std::string> getPrefixes() {
  std::ifstream prefixes("../prefix.txt");
  std::string tmp;
  std::vector<std::string> ret;

  prefixes >> tmp;
  while (prefixes) {
    ret.push_back(tmp);
    prefixes >> tmp;
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

void loadFieldTypeMap () {
  std::ifstream fieldTypes("../field_types.txt");
  uint32_t v1 = 0, v2 = 0;

  usingFieldTypeMap = true;

  fieldTypes >> std::hex >> v1 >> std::hex >> v2;

  while (fieldTypes) {
    fieldTypeMap[v1].push_back(v2);
    fieldTypes >> std::hex >> v1 >> std::hex >> v2;
  }

  fieldTypes.close();

  typePrefixes[0].insert(""); // ?
  typePrefixes[typeChecksum("DT_FLOAT", 0)].insert("a"); // DT_FLOAT
  typePrefixes[typeChecksum("DT_INT64", 0)].insert("m_a"); // DT_INT64
  typePrefixes[typeChecksum("DT_VARIABLEARRAY", 0)].insert("ar"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY
  typePrefixes[typeChecksum("DT_VARIABLEARRAY", 0)].insert("m_ar"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY
  typePrefixes[typeChecksum("DT_VARIABLEARRAY", 0)].insert("arn"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY
  typePrefixes[typeChecksum("DT_VARIABLEARRAY", 0)].insert("m_arn"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY
  typePrefixes[typeChecksum("DT_VARIABLEARRAY", 0)].insert("arr"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY
  typePrefixes[typeChecksum("DT_VARIABLEARRAY", 0)].insert("m_arr"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY
  typePrefixes[typeChecksum("DT_POLYMORPHIC_VARIABLEARRAY", 0)].insert("ar"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY
  typePrefixes[typeChecksum("DT_POLYMORPHIC_VARIABLEARRAY", 0)].insert("m_ar"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY
  typePrefixes[typeChecksum("DT_POLYMORPHIC_VARIABLEARRAY", 0)].insert("arn"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY
  typePrefixes[typeChecksum("DT_POLYMORPHIC_VARIABLEARRAY", 0)].insert("m_arn"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY
  typePrefixes[typeChecksum("DT_POLYMORPHIC_VARIABLEARRAY", 0)].insert("arr"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY
  typePrefixes[typeChecksum("DT_POLYMORPHIC_VARIABLEARRAY", 0)].insert("m_arr"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY
  typePrefixes[typeChecksum("DT_FIXEDARRAY", 0)].insert("ar"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY
  typePrefixes[typeChecksum("DT_FIXEDARRAY", 0)].insert("m_ar"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY
  typePrefixes[typeChecksum("DT_FIXEDARRAY", 0)].insert("arn"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY
  typePrefixes[typeChecksum("DT_FIXEDARRAY", 0)].insert("m_arn"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY
  typePrefixes[typeChecksum("DT_FIXEDARRAY", 0)].insert("arr"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY
  typePrefixes[typeChecksum("DT_FIXEDARRAY", 0)].insert("m_arr"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY
  typePrefixes[typeChecksum("DT_INT", 0)].insert("b"); // DT_INT
  typePrefixes[typeChecksum("DT_INT", 0)].insert("m_b"); // DT_INT
  typePrefixes[0].insert("bc"); // ?
  typePrefixes[0].insert("m_bc"); // ?
  typePrefixes[typeChecksum("DT_WORD", 0)].insert("bone"); // DT_WORD, DT_INT
  typePrefixes[typeChecksum("DT_WORD", 0)].insert("m_bone"); // DT_WORD, DT_INT
  typePrefixes[typeChecksum("DT_INT", 0)].insert("bone"); // DT_WORD, DT_INT
  typePrefixes[typeChecksum("DT_INT", 0)].insert("m_bone"); // DT_WORD, DT_INT
  typePrefixes[typeChecksum("DT_INT64", 0)].insert("cell"); // ?, DT_INT64, AICellData, AICellBytes, DT_FLOAT
  typePrefixes[typeChecksum("DT_INT64", 0)].insert("m_cell"); // ?, DT_INT64, AICellData, AICellBytes, DT_FLOAT
  typePrefixes[typeChecksum("AICellData", 0)].insert("cell"); // ?, DT_INT64, AICellData, AICellBytes, DT_FLOAT
  typePrefixes[typeChecksum("AICellData", 0)].insert("m_cell"); // ?, DT_INT64, AICellData, AICellBytes, DT_FLOAT
  typePrefixes[typeChecksum("AICellBytes", 0)].insert("cell"); // ?, DT_INT64, AICellData, AICellBytes, DT_FLOAT
  typePrefixes[typeChecksum("AICellBytes", 0)].insert("m_cell"); // ?, DT_INT64, AICellData, AICellBytes, DT_FLOAT
  typePrefixes[typeChecksum("DT_FLOAT", 0)].insert("cell"); // ?, DT_INT64, AICellData, AICellBytes, DT_FLOAT
  typePrefixes[typeChecksum("DT_FLOAT", 0)].insert("m_cell"); // ?, DT_INT64, AICellData, AICellBytes, DT_FLOAT
  typePrefixes[typeChecksum("DT_INT", 0)].insert("count"); // DT_INT
  typePrefixes[typeChecksum("DT_INT", 0)].insert("m_count"); // DT_INT
  typePrefixes[typeChecksum("DT_UINT", 0)].insert("dw"); // DT_UINT
  typePrefixes[typeChecksum("DT_UINT", 0)].insert("m_dw"); // DT_UINT
  typePrefixes[typeChecksum("DT_ENUM", 0)].insert("e"); // DT_ENUM
  typePrefixes[typeChecksum("DT_ENUM", 0)].insert("m_e"); // DT_ENUM
  typePrefixes[typeChecksum("DT_WORD", 0)].insert("end"); // DT_WORD
  typePrefixes[typeChecksum("DT_WORD", 0)].insert("m_end"); // DT_WORD
  typePrefixes[typeChecksum("DT_INT", 0)].insert("f"); // DT_INT
  typePrefixes[typeChecksum("DT_INT", 0)].insert("m_f"); // DT_INT
  typePrefixes[typeChecksum("DT_FLOAT", 0)].insert("fl"); // DT_FLOAT
  typePrefixes[typeChecksum("DT_FLOAT", 0)].insert("m_fl"); // DT_FLOAT
  typePrefixes[typeChecksum("DT_BYTE", 0)].insert("game"); // DT_BYTE
  typePrefixes[typeChecksum("DT_BYTE", 0)].insert("m_game"); // DT_BYTE
  typePrefixes[typeChecksum("DT_GBID", 0)].insert("gbid"); // DT_GBID
  typePrefixes[typeChecksum("DT_GBID", 0)].insert("m_gbid"); // DT_GBID
  typePrefixes[0].insert("h"); // ?, DT_UINT
  typePrefixes[0].insert("m_h"); // ?, DT_UINT
  typePrefixes[typeChecksum("DT_UINT", 0)].insert("h"); // ?, DT_UINT
  typePrefixes[typeChecksum("DT_UINT", 0)].insert("m_h"); // ?, DT_UINT
  typePrefixes[typeChecksum("DT_INT", 0)].insert("i"); // DT_INT
  typePrefixes[typeChecksum("DT_INT", 0)].insert("m_i"); // DT_INT
  typePrefixes[typeChecksum("DT_ENUM", 0)].insert("id"); // ?, DT_ENUM, DT_INT, DT_UINT, DT_SHARED_SERVER_DATA_ID
  typePrefixes[typeChecksum("DT_ENUM", 0)].insert("m_id"); // ?, DT_ENUM, DT_INT, DT_UINT, DT_SHARED_SERVER_DATA_ID
  typePrefixes[typeChecksum("DT_INT", 0)].insert("id"); // ?, DT_ENUM, DT_INT, DT_UINT, DT_SHARED_SERVER_DATA_ID
  typePrefixes[typeChecksum("DT_INT", 0)].insert("m_id"); // ?, DT_ENUM, DT_INT, DT_UINT, DT_SHARED_SERVER_DATA_ID
  typePrefixes[typeChecksum("DT_UINT", 0)].insert("id"); // ?, DT_ENUM, DT_INT, DT_UINT, DT_SHARED_SERVER_DATA_ID
  typePrefixes[typeChecksum("DT_UINT", 0)].insert("m_id"); // ?, DT_ENUM, DT_INT, DT_UINT, DT_SHARED_SERVER_DATA_ID
  typePrefixes[typeChecksum("DT_SHARED_SERVER_DATA_ID", 0)].insert("id"); // ?, DT_ENUM, DT_INT, DT_UINT, DT_SHARED_SERVER_DATA_ID
  typePrefixes[typeChecksum("DT_SHARED_SERVER_DATA_ID", 0)].insert("m_id"); // ?, DT_ENUM, DT_INT, DT_UINT, DT_SHARED_SERVER_DATA_ID
  typePrefixes[typeChecksum("DT_VECTOR4D", 0)].insert("inv"); // DT_VECTOR4D, DT_FLOAT
  typePrefixes[typeChecksum("DT_VECTOR4D", 0)].insert("m_inv"); // DT_VECTOR4D, DT_FLOAT
  typePrefixes[typeChecksum("DT_FLOAT", 0)].insert("inv"); // DT_VECTOR4D, DT_FLOAT
  typePrefixes[typeChecksum("DT_FLOAT", 0)].insert("m_inv"); // DT_VECTOR4D, DT_FLOAT
  typePrefixes[typeChecksum("DT_INT", 0)].insert("is"); // DT_INT
  typePrefixes[typeChecksum("DT_INT", 0)].insert("m_is"); // DT_INT
  typePrefixes[0].insert("l"); // ?
  typePrefixes[0].insert("m_l"); // ?
  typePrefixes[typeChecksum("PRTransform", 0)].insert("local"); // PRTransform, 0x5f527528
  typePrefixes[typeChecksum("PRTransform", 0)].insert("m_local"); // PRTransform, 0x5f527528
  typePrefixes[0x5f527528].insert("local"); // PRTransform, 0x5f527528
  typePrefixes[0x5f527528].insert("m_local"); // PRTransform, 0x5f527528
  typePrefixes[typeChecksum("Matrix3x3", 0)].insert("m"); // Matrix3x3
  typePrefixes[typeChecksum("Matrix3x3", 0)].insert("m_m"); // Matrix3x3
  typePrefixes[typeChecksum("DT_WORD", 0)].insert("max"); // DT_WORD
  typePrefixes[typeChecksum("DT_WORD", 0)].insert("m_max"); // DT_WORD
  typePrefixes[typeChecksum("DT_INT", 0)].insert("n"); // DT_INT, DT_UINT, DT_WORD, DT_INT64, DT_FLOAT
  typePrefixes[typeChecksum("DT_INT", 0)].insert("m_n"); // DT_INT, DT_UINT, DT_WORD, DT_INT64, DT_FLOAT
  typePrefixes[typeChecksum("DT_UINT", 0)].insert("n"); // DT_INT, DT_UINT, DT_WORD, DT_INT64, DT_FLOAT
  typePrefixes[typeChecksum("DT_UINT", 0)].insert("m_n"); // DT_INT, DT_UINT, DT_WORD, DT_INT64, DT_FLOAT
  typePrefixes[typeChecksum("DT_WORD", 0)].insert("n"); // DT_INT, DT_UINT, DT_WORD, DT_INT64, DT_FLOAT
  typePrefixes[typeChecksum("DT_WORD", 0)].insert("m_n"); // DT_INT, DT_UINT, DT_WORD, DT_INT64, DT_FLOAT
  typePrefixes[typeChecksum("DT_INT64", 0)].insert("n"); // DT_INT, DT_UINT, DT_WORD, DT_INT64, DT_FLOAT
  typePrefixes[typeChecksum("DT_INT64", 0)].insert("m_n"); // DT_INT, DT_UINT, DT_WORD, DT_INT64, DT_FLOAT
  typePrefixes[typeChecksum("DT_FLOAT", 0)].insert("n"); // DT_INT, DT_UINT, DT_WORD, DT_INT64, DT_FLOAT
  typePrefixes[typeChecksum("DT_FLOAT", 0)].insert("m_n"); // DT_INT, DT_UINT, DT_WORD, DT_INT64, DT_FLOAT
  typePrefixes[typeChecksum("DT_VARIABLEARRAY", 0)].insert("p"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY, DT_BCVEC2I
  typePrefixes[typeChecksum("DT_VARIABLEARRAY", 0)].insert("m_p"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY, DT_BCVEC2I
  typePrefixes[typeChecksum("DT_POLYMORPHIC_VARIABLEARRAY", 0)].insert("p"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY, DT_BCVEC2I
  typePrefixes[typeChecksum("DT_POLYMORPHIC_VARIABLEARRAY", 0)].insert("m_p"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY, DT_BCVEC2I
  typePrefixes[typeChecksum("DT_FIXEDARRAY", 0)].insert("p"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY, DT_BCVEC2I
  typePrefixes[typeChecksum("DT_FIXEDARRAY", 0)].insert("m_p"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY, DT_BCVEC2I
  typePrefixes[typeChecksum("DT_BCVEC2I", 0)].insert("p"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY, DT_BCVEC2I
  typePrefixes[typeChecksum("DT_BCVEC2I", 0)].insert("m_p"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY, DT_BCVEC2I
  typePrefixes[typeChecksum("DT_INT64", 0)].insert("parent"); // DT_INT64, DT_WORD
  typePrefixes[typeChecksum("DT_INT64", 0)].insert("m_parent"); // DT_INT64, DT_WORD
  typePrefixes[typeChecksum("DT_WORD", 0)].insert("parent"); // DT_INT64, DT_WORD
  typePrefixes[typeChecksum("DT_WORD", 0)].insert("m_parent"); // DT_INT64, DT_WORD
  typePrefixes[typeChecksum("VectorPath", 0)].insert("path"); // VectorPath, 0xcbfdd2ea, 0x560ae4cf, 0xcc354444
  typePrefixes[typeChecksum("VectorPath", 0)].insert("m_path"); // VectorPath, 0xcbfdd2ea, 0x560ae4cf, 0xcc354444
  typePrefixes[0xcbfdd2ea].insert("path"); // VectorPath, 0xcbfdd2ea, 0x560ae4cf, 0xcc354444
  typePrefixes[0xcbfdd2ea].insert("m_path"); // VectorPath, 0xcbfdd2ea, 0x560ae4cf, 0xcc354444
  typePrefixes[0x560ae4cf].insert("path"); // VectorPath, 0xcbfdd2ea, 0x560ae4cf, 0xcc354444
  typePrefixes[0x560ae4cf].insert("m_path"); // VectorPath, 0xcbfdd2ea, 0x560ae4cf, 0xcc354444
  typePrefixes[0xcc354444].insert("path"); // VectorPath, 0xcbfdd2ea, 0x560ae4cf, 0xcc354444
  typePrefixes[0xcc354444].insert("m_path"); // VectorPath, 0xcbfdd2ea, 0x560ae4cf, 0xcc354444
  typePrefixes[typeChecksum("DT_VARIABLEARRAY", 0)].insert("pdw"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY
  typePrefixes[typeChecksum("DT_VARIABLEARRAY", 0)].insert("m_pdw"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY
  typePrefixes[typeChecksum("DT_POLYMORPHIC_VARIABLEARRAY", 0)].insert("pdw"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY
  typePrefixes[typeChecksum("DT_POLYMORPHIC_VARIABLEARRAY", 0)].insert("m_pdw"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY
  typePrefixes[typeChecksum("DT_FIXEDARRAY", 0)].insert("pdw"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY
  typePrefixes[typeChecksum("DT_FIXEDARRAY", 0)].insert("m_pdw"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY
  typePrefixes[typeChecksum("DT_GBID", 0)].insert("pgbid"); // DT_GBID
  typePrefixes[typeChecksum("DT_GBID", 0)].insert("m_pgbid"); // DT_GBID
  typePrefixes[typeChecksum("DT_WORD", 0)].insert("plane"); // DT_WORD
  typePrefixes[typeChecksum("DT_WORD", 0)].insert("m_plane"); // DT_WORD
  typePrefixes[typeChecksum("DT_INT64", 0)].insert("pn"); // DT_INT64
  typePrefixes[typeChecksum("DT_INT64", 0)].insert("m_pn"); // DT_INT64
  typePrefixes[typeChecksum("DT_VARIABLEARRAY", 0)].insert("pt"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY, DT_INT64
  typePrefixes[typeChecksum("DT_VARIABLEARRAY", 0)].insert("m_pt"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY, DT_INT64
  typePrefixes[typeChecksum("DT_VARIABLEARRAY", 0)].insert("pwv"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY, DT_INT64
  typePrefixes[typeChecksum("DT_VARIABLEARRAY", 0)].insert("m_pwv"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY, DT_INT64
  typePrefixes[typeChecksum("DT_POLYMORPHIC_VARIABLEARRAY", 0)].insert("pt"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY, DT_INT64
  typePrefixes[typeChecksum("DT_POLYMORPHIC_VARIABLEARRAY", 0)].insert("m_pt"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY, DT_INT64
  typePrefixes[typeChecksum("DT_POLYMORPHIC_VARIABLEARRAY", 0)].insert("pwv"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY, DT_INT64
  typePrefixes[typeChecksum("DT_POLYMORPHIC_VARIABLEARRAY", 0)].insert("m_pwv"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY, DT_INT64
  typePrefixes[typeChecksum("DT_FIXEDARRAY", 0)].insert("pt"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY, DT_INT64
  typePrefixes[typeChecksum("DT_FIXEDARRAY", 0)].insert("m_pt"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY, DT_INT64
  typePrefixes[typeChecksum("DT_FIXEDARRAY", 0)].insert("pwv"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY, DT_INT64
  typePrefixes[typeChecksum("DT_FIXEDARRAY", 0)].insert("m_pwv"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY, DT_INT64
  typePrefixes[typeChecksum("DT_INT64", 0)].insert("pt"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY, DT_INT64
  typePrefixes[typeChecksum("DT_INT64", 0)].insert("m_pt"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY, DT_INT64
  typePrefixes[typeChecksum("DT_INT64", 0)].insert("pwv"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY, DT_INT64
  typePrefixes[typeChecksum("DT_INT64", 0)].insert("m_pwv"); // DT_VARIABLEARRAY, DT_POLYMORPHIC_VARIABLEARRAY, DT_FIXEDARRAY, DT_INT64
  typePrefixes[typeChecksum("bcQuat", 0)].insert("q"); // bcQuat
  typePrefixes[typeChecksum("bcQuat", 0)].insert("m_q"); // bcQuat
  typePrefixes[typeChecksum("DT_RGBACOLOR", 0)].insert("rgba"); // DT_RGBACOLOR
  typePrefixes[typeChecksum("DT_RGBACOLOR", 0)].insert("m_rgba"); // DT_RGBACOLOR
  typePrefixes[typeChecksum("DT_RGBACOLORVALUE", 0)].insert("rgbaval"); // DT_RGBACOLORVALUE
  typePrefixes[typeChecksum("DT_RGBACOLORVALUE", 0)].insert("m_rgbaval"); // DT_RGBACOLORVALUE
  typePrefixes[typeChecksum("DT_UINT", 0)].insert("s"); // DT_UINT, 0xcc139f31, 0xe562d892
  typePrefixes[typeChecksum("DT_UINT", 0)].insert("m_s"); // DT_UINT, 0xcc139f31, 0xe562d892
  typePrefixes[0xcc139f31].insert("s"); // DT_UINT, 0xcc139f31, 0xe562d892
  typePrefixes[0xcc139f31].insert("m_s"); // DT_UINT, 0xcc139f31, 0xe562d892
  typePrefixes[0xe562d892].insert("s"); // DT_UINT, 0xcc139f31, 0xe562d892
  typePrefixes[0xe562d892].insert("m_s"); // DT_UINT, 0xcc139f31, 0xe562d892
  typePrefixes[typeChecksum("DT_INT", 0)].insert("sample"); // DT_INT
  typePrefixes[typeChecksum("DT_INT", 0)].insert("m_sample"); // DT_INT
  typePrefixes[typeChecksum("SerializeData", 0)].insert("ser"); // SerializeData
  typePrefixes[typeChecksum("SerializeData", 0)].insert("m_ser"); // SerializeData
  typePrefixes[typeChecksum("DT_SNO", 0)].insert("sno"); // DT_SNO
  typePrefixes[typeChecksum("DT_SNO", 0)].insert("m_sno"); // DT_SNO
  typePrefixes[typeChecksum("DT_WORD", 0)].insert("start"); // DT_WORD
  typePrefixes[typeChecksum("DT_WORD", 0)].insert("m_start"); // DT_WORD
  typePrefixes[typeChecksum("DT_CHARARRAY", 0)].insert("sz"); // DT_CHARARRAY, DT_STRING_FORMULA, DT_CSTRING, DT_UINT
  typePrefixes[typeChecksum("DT_CHARARRAY", 0)].insert("m_sz"); // DT_CHARARRAY, DT_STRING_FORMULA, DT_CSTRING, DT_UINT
  typePrefixes[typeChecksum("DT_STRING_FORMULA", 0)].insert("sz"); // DT_CHARARRAY, DT_STRING_FORMULA, DT_CSTRING, DT_UINT
  typePrefixes[typeChecksum("DT_STRING_FORMULA", 0)].insert("m_sz"); // DT_CHARARRAY, DT_STRING_FORMULA, DT_CSTRING, DT_UINT
  typePrefixes[typeChecksum("DT_CSTRING", 0)].insert("sz"); // DT_CHARARRAY, DT_STRING_FORMULA, DT_CSTRING, DT_UINT
  typePrefixes[typeChecksum("DT_CSTRING", 0)].insert("m_sz"); // DT_CHARARRAY, DT_STRING_FORMULA, DT_CSTRING, DT_UINT
  typePrefixes[typeChecksum("DT_UINT", 0)].insert("sz"); // DT_CHARARRAY, DT_STRING_FORMULA, DT_CSTRING, DT_UINT
  typePrefixes[typeChecksum("DT_UINT", 0)].insert("m_sz"); // DT_CHARARRAY, DT_STRING_FORMULA, DT_CSTRING, DT_UINT
  typePrefixes[0].insert("t"); // ?, DT_ENUM
  typePrefixes[0].insert("m_t"); // ?, DT_ENUM
  typePrefixes[typeChecksum("DT_ENUM", 0)].insert("t"); // ?, DT_ENUM
  typePrefixes[typeChecksum("DT_ENUM", 0)].insert("m_t"); // ?, DT_ENUM
  typePrefixes[typeChecksum("DT_STRING_FORMULA", 0)].insert("t"); // ?, DT_ENUM
  typePrefixes[typeChecksum("DT_STRING_FORMULA", 0)].insert("m_t"); // ?, DT_ENUM
  typePrefixes[typeChecksum("DT_TAGMAP", 0)].insert("tag"); // DT_TAGMAP
  typePrefixes[typeChecksum("DT_TAGMAP", 0)].insert("m_tag"); // DT_TAGMAP
  typePrefixes[typeChecksum("DT_BYTE", 0)].insert("twin"); // DT_BYTE
  typePrefixes[typeChecksum("DT_BYTE", 0)].insert("m_twin"); // DT_BYTE
  typePrefixes[typeChecksum("DT_UINT", 0)].insert("u"); // DT_UINT, DT_STARTLOC_NAME, DT_WORD, DT_INT64, DT_BYTE
  typePrefixes[typeChecksum("DT_UINT", 0)].insert("m_u"); // DT_UINT, DT_STARTLOC_NAME, DT_WORD, DT_INT64, DT_BYTE
  typePrefixes[typeChecksum("DT_STARTLOC_NAME", 0)].insert("u"); // DT_UINT, DT_STARTLOC_NAME, DT_WORD, DT_INT64, DT_BYTE
  typePrefixes[typeChecksum("DT_STARTLOC_NAME", 0)].insert("m_u"); // DT_UINT, DT_STARTLOC_NAME, DT_WORD, DT_INT64, DT_BYTE
  typePrefixes[typeChecksum("DT_WORD", 0)].insert("u"); // DT_UINT, DT_STARTLOC_NAME, DT_WORD, DT_INT64, DT_BYTE
  typePrefixes[typeChecksum("DT_WORD", 0)].insert("m_u"); // DT_UINT, DT_STARTLOC_NAME, DT_WORD, DT_INT64, DT_BYTE
  typePrefixes[typeChecksum("DT_INT64", 0)].insert("u"); // DT_UINT, DT_STARTLOC_NAME, DT_WORD, DT_INT64, DT_BYTE
  typePrefixes[typeChecksum("DT_INT64", 0)].insert("m_u"); // DT_UINT, DT_STARTLOC_NAME, DT_WORD, DT_INT64, DT_BYTE
  typePrefixes[typeChecksum("DT_BYTE", 0)].insert("u"); // DT_UINT, DT_STARTLOC_NAME, DT_WORD, DT_INT64, DT_BYTE
  typePrefixes[typeChecksum("DT_BYTE", 0)].insert("m_u"); // DT_UINT, DT_STARTLOC_NAME, DT_WORD, DT_INT64, DT_BYTE
  typePrefixes[typeChecksum("DT_VECTOR2D", 0)].insert("v"); // DT_VECTOR2D, DT_VECTOR3D, DT_VECTOR4D, DT_INT, DT_BCVEC2I
  typePrefixes[typeChecksum("DT_VECTOR2D", 0)].insert("m_v"); // DT_VECTOR2D, DT_VECTOR3D, DT_VECTOR4D, DT_INT, DT_BCVEC2I
  typePrefixes[typeChecksum("DT_VECTOR3D", 0)].insert("v"); // DT_VECTOR2D, DT_VECTOR3D, DT_VECTOR4D, DT_INT, DT_BCVEC2I
  typePrefixes[typeChecksum("DT_VECTOR3D", 0)].insert("m_v"); // DT_VECTOR2D, DT_VECTOR3D, DT_VECTOR4D, DT_INT, DT_BCVEC2I
  typePrefixes[typeChecksum("DT_VECTOR4D", 0)].insert("v"); // DT_VECTOR2D, DT_VECTOR3D, DT_VECTOR4D, DT_INT, DT_BCVEC2I
  typePrefixes[typeChecksum("DT_VECTOR4D", 0)].insert("m_v"); // DT_VECTOR2D, DT_VECTOR3D, DT_VECTOR4D, DT_INT, DT_BCVEC2I
  typePrefixes[typeChecksum("DT_INT", 0)].insert("v"); // DT_VECTOR2D, DT_VECTOR3D, DT_VECTOR4D, DT_INT, DT_BCVEC2I
  typePrefixes[typeChecksum("DT_INT", 0)].insert("m_v"); // DT_VECTOR2D, DT_VECTOR3D, DT_VECTOR4D, DT_INT, DT_BCVEC2I
  typePrefixes[typeChecksum("DT_BCVEC2I", 0)].insert("v"); // DT_VECTOR2D, DT_VECTOR3D, DT_VECTOR4D, DT_INT, DT_BCVEC2I
  typePrefixes[typeChecksum("DT_BCVEC2I", 0)].insert("m_v"); // DT_VECTOR2D, DT_VECTOR3D, DT_VECTOR4D, DT_INT, DT_BCVEC2I
  typePrefixes[typeChecksum("DT_VECTOR2D", 0)].insert("vec"); // DT_VECTOR2D, DT_VECTOR3D, DT_VECTOR4D, DT_INT, DT_BCVEC2I
  typePrefixes[typeChecksum("DT_VECTOR2D", 0)].insert("m_vec"); // DT_VECTOR2D, DT_VECTOR3D, DT_VECTOR4D, DT_INT, DT_BCVEC2I
  typePrefixes[typeChecksum("DT_VECTOR3D", 0)].insert("vec"); // DT_VECTOR2D, DT_VECTOR3D, DT_VECTOR4D, DT_INT, DT_BCVEC2I
  typePrefixes[typeChecksum("DT_VECTOR3D", 0)].insert("m_vec"); // DT_VECTOR2D, DT_VECTOR3D, DT_VECTOR4D, DT_INT, DT_BCVEC2I
  typePrefixes[typeChecksum("DT_VECTOR4D", 0)].insert("vec"); // DT_VECTOR2D, DT_VECTOR3D, DT_VECTOR4D, DT_INT, DT_BCVEC2I
  typePrefixes[typeChecksum("DT_VECTOR4D", 0)].insert("m_vec"); // DT_VECTOR2D, DT_VECTOR3D, DT_VECTOR4D, DT_INT, DT_BCVEC2I
  typePrefixes[typeChecksum("DT_INT", 0)].insert("vec"); // DT_VECTOR2D, DT_VECTOR3D, DT_VECTOR4D, DT_INT, DT_BCVEC2I
  typePrefixes[typeChecksum("DT_INT", 0)].insert("m_vec"); // DT_VECTOR2D, DT_VECTOR3D, DT_VECTOR4D, DT_INT, DT_BCVEC2I
  typePrefixes[typeChecksum("DT_BCVEC2I", 0)].insert("vec"); // DT_VECTOR2D, DT_VECTOR3D, DT_VECTOR4D, DT_INT, DT_BCVEC2I
  typePrefixes[typeChecksum("DT_BCVEC2I", 0)].insert("m_vec"); // DT_VECTOR2D, DT_VECTOR3D, DT_VECTOR4D, DT_INT, DT_BCVEC2I
  typePrefixes[typeChecksum("DT_WORD", 0)].insert("vertex"); // DT_WORD
  typePrefixes[typeChecksum("DT_WORD", 0)].insert("m_vertex"); // DT_WORD
  typePrefixes[0].insert("vw"); // ?
  typePrefixes[0].insert("m_vw"); // ?
  typePrefixes[typeChecksum("AxialCylinder", 0)].insert("wcyl"); // AxialCylinder
  typePrefixes[typeChecksum("AxialCylinder", 0)].insert("m_wcyl"); // AxialCylinder
  typePrefixes[typeChecksum("DT_FLOAT", 0)].insert("wd"); // DT_FLOAT
  typePrefixes[typeChecksum("DT_FLOAT", 0)].insert("m_wd"); // DT_FLOAT
  typePrefixes[typeChecksum("DT_VECTOR2D", 0)].insert("wp"); // DT_VECTOR2D, DT_VECTOR3D
  typePrefixes[typeChecksum("DT_VECTOR2D", 0)].insert("m_wp"); // DT_VECTOR2D, DT_VECTOR3D
  typePrefixes[typeChecksum("DT_VECTOR3D", 0)].insert("wp"); // DT_VECTOR2D, DT_VECTOR3D
  typePrefixes[typeChecksum("DT_VECTOR3D", 0)].insert("m_wp"); // DT_VECTOR2D, DT_VECTOR3D
  typePrefixes[0].insert("wr"); // ?
  typePrefixes[0].insert("m_wr"); // ?
  typePrefixes[typeChecksum("Sphere", 0)].insert("ws"); // Sphere
  typePrefixes[typeChecksum("Sphere", 0)].insert("m_ws"); // Sphere
  typePrefixes[typeChecksum("DT_VECTOR2D", 0)].insert("wv"); // DT_VECTOR2D, DT_VECTOR3D
  typePrefixes[typeChecksum("DT_VECTOR2D", 0)].insert("m_wv"); // DT_VECTOR2D, DT_VECTOR3D
  typePrefixes[typeChecksum("DT_VECTOR2D", 0)].insert("wvp"); // DT_VECTOR2D, DT_VECTOR3D
  typePrefixes[typeChecksum("DT_VECTOR2D", 0)].insert("m_wvp"); // DT_VECTOR2D, DT_VECTOR3D
  typePrefixes[typeChecksum("DT_VECTOR3D", 0)].insert("wv"); // DT_VECTOR2D, DT_VECTOR3D
  typePrefixes[typeChecksum("DT_VECTOR3D", 0)].insert("m_wv"); // DT_VECTOR2D, DT_VECTOR3D
  typePrefixes[typeChecksum("DT_VECTOR3D", 0)].insert("wvp"); // DT_VECTOR2D, DT_VECTOR3D
  typePrefixes[typeChecksum("DT_VECTOR3D", 0)].insert("m_wvp"); // DT_VECTOR2D, DT_VECTOR3D
}

void signal_callback_handler(int signum) {
  terminating = true;
}

int main(int argc, char *argv[]) {
  uint32_t gettingSubDict = 0;
  uint32_t subDictPos = 0;
  bool gettingMin = false;
  bool gettingMax = false;
  bool useDict = true;
  bool wordsOnly = false;
  bool noPrefix = false;
  bool ignoreAllCaps = true;
  bool useEnglish = false;
  bool gettingThreads = false;

  signal(SIGINT, &signal_callback_handler);
  signal(SIGTERM, &signal_callback_handler);

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
      else if(arg == "--english") {
        useEnglish = true;
      }
      else if(arg == "--threads") {
        gettingThreads = true;
      }
      else if(arg[0] == '-') {
        // discard unknown option
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
      else {
        uint32_t uTmp = 0;
        std::stringstream ss;

        ss << std::hex << arg;
        ss >> uTmp;
        checksumMatch.insert(uTmp);
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
      checksumMatch.insert(uTmp);
      std::cin >> std::hex >> uTmp;
    }
  }

  if (hashType == 0 && checksumMatch.size() == 0) {
    std::ifstream hashes("../unfound_hashes.txt");
    size_t uTmp;
    hashes >> std::hex >> uTmp;

    while (hashes) {
      checksumMatch.insert(uTmp);
      hashes >> std::hex >> uTmp;
    }
  } else if(hashType == 1 && checksumMatch.size() == 0) {
    std::ifstream hashes("../unfound_field_hashes.txt");
    size_t uTmp;

    hashes >> std::hex >> uTmp;
    while (hashes) {
      checksumMatch.insert(uTmp);
      hashes >> std::hex >> uTmp;
    }
  }

  if (paired && hashType == 0) {
    std::ifstream hashes("../unfound_field_hashes.txt");
    size_t uTmp;

    hashes >> std::hex >> uTmp;
    while (hashes) {
      checksumMatchSecondary.insert(uTmp);
      hashes >> std::hex >> uTmp;
    }
  } else {
    paired = false;
  }

  int32_t dictmax = dict.size();
  std::unordered_map<std::string, bool> dictmap;

  if (!wordsOnly) {
    for (const auto &baseelem : defaultDict) {
      dictmap[baseelem] = true;
    }
  }

  if (useDict) {
    for (const auto &baseelem : (useDict ? getDict(useEnglish) : defaultDict)) {
      if (baseelem.length() > 1) {
        std::string elem = baseelem;
        std::string newelem = elem;
        std::string newelem2 = elem;

        std::transform(newelem.begin(), newelem.end(), newelem.begin(), [](unsigned char c){ return std::toupper(c); });
        std::transform(newelem2.begin(), newelem2.end(), newelem2.begin(), [](unsigned char c){ return std::tolower(c); });

        if (ignoreAllCaps && isAllCaps(elem)) {
          continue;
        }

        if (hashType == 2) {
          dictmap[newelem2] = true;
          continue;
        }

        if (elem == newelem2) {
          elem = newelem.substr(0, 1) + newelem2.substr(1);
        }

        dictmap[elem] = true;
      }
    }
  }

  for (const auto elem : dictmap) {
    dict.push_back(elem.first);
  }

  if (hashType == 1 && !noPrefix && subdict[0].size() < 1) {
    subdict[0] = getPrefixes();
    subdict[0].push_back("");
  }

  if (hashType == 1) {
    loadFieldTypeMap();
  }

  workerCount -= 1;

  if (checksumMatch.size()) {
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
      collisions(masterTmp, 0, c + 1, 0, false);
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
