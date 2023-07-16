#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <unordered_set>
#include <map>
#include <algorithm>
#include <filesystem>
#include <thread>
#include <atomic>
#include <mutex>
#include <chrono>
#include <cstdlib>
#include <signal.h>
#include <new>

#if __GNUC__
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
std::map<std::string, bool> stringUsed;
std::map<uint32_t, std::vector<uint32_t>> fieldTypeMap;
std::map<uint32_t, std::unordered_set<std::string>> typePrefixes;

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

uint32_t typeChecksumNonRef(std::string str, uint32_t hash) {
  return typeChecksum(str, hash);
}

uint32_t fieldChecksum(const std::string &str, uint32_t hash) {
  for (size_t i = 0; i < str.length(); i++) {
    hash = (hash << 5) + hash + (unsigned char)str[i];
  }

  // field names have an additional mask
  return hash & 0xfffffff;
}

uint32_t fieldChecksumNonRef(std::string str, uint32_t hash) {
  return fieldChecksum(str, hash);
}

uint32_t gbidChecksum(const std::string &str, uint32_t hash) {
  for (size_t i = 0; i < str.length(); i++) {
    hash = (hash << 5) + hash + (unsigned char)std::tolower(str[i]);
  }

  // field names have an additional mask
  return hash;
}

uint32_t gbidChecksumNonRef(std::string str, uint32_t hash) {
  return gbidChecksum(str, hash);
}

uint32_t (*checksum)(const std::string &str, uint32_t hash) = typeChecksum;
uint32_t (*checksumNonRef)(std::string str, uint32_t hash) = typeChecksumNonRef;

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
    uint32_t wordChecksum = fieldChecksumNonRef("t" + word, 0);

    if (hasChecksum(checksumMatchSecondary, wordChecksum)) {
      return true;
    }

    wordChecksum = fieldChecksumNonRef("pt" + word, 0);
    if (hasChecksum(checksumMatchSecondary, wordChecksum)) {
      return true;
    }

    wordChecksum = fieldChecksumNonRef("ar" + word, 0);

    if (hasChecksum(checksumMatchSecondary, wordChecksum)) {
      return true;
    }

    wordChecksum = fieldChecksumNonRef("t" + word + "s", 0);

    if (hasChecksum(checksumMatchSecondary, wordChecksum)) {
      return true;
    }

    wordChecksum = fieldChecksumNonRef("pt" + word + "s", 0);

    if (hasChecksum(checksumMatchSecondary, wordChecksum)) {
      return true;
    }

    wordChecksum = fieldChecksumNonRef("ar" + word + "s", 0);

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
    if (typePrefixes[typeHash].size()) {
      return typePrefixes[typeHash].count(subdict[0][tmp[0]]) > 0;
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
    uint32_t newChecksum = checksumNonRef(getDictEntry(c, pos, max), currentChecksum);
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

std::vector<std::string> getDict(std::string dictPathOrString) {
  std::vector<std::string> ret;

  std::ifstream dict(dictPathOrString);

  if (!dict) {
    dict.open("../" + dictPathOrString);
  }

  if (dict) {
    std::string tmp;

    dict >> tmp;
    while (dict) {
      ret.push_back(tmp);
      dict >> tmp;
    }
  }
  else {
    std::stringstream ss(dictPathOrString);

    std::string tmp;

    ss >> tmp;
    while (ss) {
      ret.push_back(tmp);
      ss >> tmp;
    }
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
    fieldTypeMap[v1].push_back(v2);
    fieldTypes >> std::hex >> v1 >> std::hex >> v2;
  }

  fieldTypes.close();

  typePrefixes[0].insert("t"); // ?

  // Fake type DT_BOOL
  typePrefixes[0x3d461b83].insert("b");
  typePrefixes[0x3d461b83].insert("f");
  if (!common) typePrefixes[0x3d461b83].insert("m_b");
  if (!common) typePrefixes[0x3d461b83].insert("m_f");

  // Fake type DT_FLOAT_ARRAY
  typePrefixes[0xb0a53e8b].insert("af");

  // Rest of existing types.
  typePrefixes[2408934].insert("aabb");
  if (!common) typePrefixes[231895989].insert("h");
  typePrefixes[248064347].insert("wp");
  typePrefixes[721585600].insert("h");
  typePrefixes[1028015787].insert("dw");
  if (!common) typePrefixes[1028015787].insert("u");
  if (!common) typePrefixes[1028015787].insert("n");
  if (!common) typePrefixes[1028015787].insert("game");
  if (!common) typePrefixes[1028015787].insert("twin");
  typePrefixes[1028111660].insert("e");
  if (!common) typePrefixes[1028111660].insert("id");
  if (!common) typePrefixes[1028111660].insert("n");
  if (!common) typePrefixes[1028111660].insert("dw");
  typePrefixes[1028170061].insert("gbid");
  if (!common) typePrefixes[1028170061].insert("n");
  typePrefixes[1028680983].insert("dw");
  typePrefixes[1028680983].insert("h");
  typePrefixes[1028680983].insert("sz");
  typePrefixes[1028680983].insert("u");
  if (!common) typePrefixes[1028680983].insert("s");
  if (!common) typePrefixes[1028680983].insert("id");
  if (!common) typePrefixes[1028680983].insert("w");
  if (!common) typePrefixes[1028680983].insert("sno");
  typePrefixes[1028759507].insert("bone");
  typePrefixes[1028759507].insert("dw");
  if (!common) typePrefixes[1028759507].insert("vertex");
  if (!common) typePrefixes[1028759507].insert("triangle");
  if (!common) typePrefixes[1028759507].insert("constraint");
  if (!common) typePrefixes[1028759507].insert("max");
  if (!common) typePrefixes[1028759507].insert("plane");
  typePrefixes[1028759507].insert("n");
  typePrefixes[1028759507].insert("u");
  if (!common) typePrefixes[1028759507].insert("m_bone");
  if (!common) typePrefixes[1028759507].insert("attachment");
  if (!common) typePrefixes[1028759507].insert("start");
  if (!common) typePrefixes[1028759507].insert("end");
  typePrefixes[1443554511].insert("path");
  typePrefixes[1599239464].insert("local");
  typePrefixes[1599239464].insert("m_local");
  typePrefixes[1683664497].insert("ar");
  if (!common) typePrefixes[1683664497].insert("arn");
  typePrefixes[1683664497].insert("arr");
  if (!common) typePrefixes[1683664497].insert("at");
  typePrefixes[1683664497].insert("pt");
  typePrefixes[1797021084].insert("h");
  if (!common) typePrefixes[1797021084].insert("ar");
  typePrefixes[1931092405].insert("vec");
  typePrefixes[1931092405].insert("p");
  typePrefixes[2170423475].insert("m");
  typePrefixes[2175310548].insert("sz");
  typePrefixes[2175310548].insert("us");
  typePrefixes[2193642883].insert("u");
  typePrefixes[2193642883].insert("dw");
  typePrefixes[2384880434].insert("rgba");
  if (!common) typePrefixes[2384880434].insert("fl");
  typePrefixes[2388214534].insert("ar");
  if (!common) typePrefixes[2388214534].insert("arn");
  typePrefixes[2388214534].insert("arr");
  if (!common) typePrefixes[2388214534].insert("at");
  typePrefixes[2388214534].insert("pt");
  typePrefixes[2450313795].insert("v");
  typePrefixes[2450313795].insert("sz");
  typePrefixes[2588169118].insert("local");
  typePrefixes[2594652800].insert("path");
  if (!common) typePrefixes[2764320258].insert("count");
  if (!common) typePrefixes[2764320258].insert("e");
  if (!common) typePrefixes[2764320258].insert("i");
  typePrefixes[2764320258].insert("id");
  if (!common) typePrefixes[2764320258].insert("is");
  if (!common) typePrefixes[2764320258].insert("m_");
  if (!common) typePrefixes[2764320258].insert("m_bone");
  if (!common) typePrefixes[2764320258].insert("m_face");
  if (!common) typePrefixes[2764320258].insert("m_plane");
  if (!common) typePrefixes[2764320258].insert("m_vertex");
  typePrefixes[2764320258].insert("n");
  if (!common) typePrefixes[2764320258].insert("sample");
  if (!common) typePrefixes[2764320258].insert("sno");
  if (!common) typePrefixes[2764320258].insert("w");
  typePrefixes[2764331143].insert("sno");
  if (!common) typePrefixes[2764331143].insert("h");
  typePrefixes[2866333320].insert("ann");
  if (!common) typePrefixes[2866333320].insert("m_ann");
  typePrefixes[3017070665].insert("wcyl");
  typePrefixes[3045283369].insert("id");
  typePrefixes[3063971755].insert("h");
  if (!common) typePrefixes[3121633597].insert("a");
  typePrefixes[3121633597].insert("ann");
  typePrefixes[3121633597].insert("dw");
  typePrefixes[3121633597].insert("e");
  typePrefixes[3121633597].insert("fl");
  typePrefixes[3121633597].insert("h");
  typePrefixes[3121633597].insert("n");
  if (!common) typePrefixes[3121633597].insert("q");
  typePrefixes[3121633597].insert("sno");
  typePrefixes[3121633597].insert("u");
  typePrefixes[3121633597].insert("v");
  typePrefixes[3121633597].insert("wp");
  typePrefixes[3124492544].insert("v");
  typePrefixes[3124492544].insert("vec");
  if (!common) typePrefixes[3124492544].insert("wp");
  if (!common) typePrefixes[3124492544].insert("wv");
  typePrefixes[3124492577].insert("wv");
  typePrefixes[3124492577].insert("wp");
  typePrefixes[3124492577].insert("v");
  typePrefixes[3124492577].insert("vec");
  if (!common) typePrefixes[3124492610].insert("inv");
  if (!common) typePrefixes[3124492610].insert("m_inv");
  if (!common) typePrefixes[3124492610].insert("pt");
  typePrefixes[3124492610].insert("v");
  if (!common) typePrefixes[3124492610].insert("vec");
  typePrefixes[3212271855].insert("rgbaval");
  typePrefixes[3244749660].insert("ar");
  if (!common) typePrefixes[3244749660].insert("arn");
  typePrefixes[3244749660].insert("arr");
  if (!common) typePrefixes[3244749660].insert("at");
  typePrefixes[3244749660].insert("pt");
  typePrefixes[3339108615].insert("snoname");
  typePrefixes[3339108615].insert("sno");
  typePrefixes[3384912071].insert("ws");
  typePrefixes[3422409450].insert("path");
  typePrefixes[3423838001].insert("s");
  typePrefixes[3493213809].insert("m_e");
  if (!common) typePrefixes[3493213809].insert("h");
  typePrefixes[3846829457].insert("sz");
  if (!common) typePrefixes[3846829457].insert("n");
  typePrefixes[3846829457].insert("s");
  typePrefixes[3848460434].insert("s");
  typePrefixes[3864020909].insert("a");
  if (!common) typePrefixes[3864020909].insert("cell");
  if (!common) typePrefixes[3864020909].insert("dw");
  typePrefixes[3864020909].insert("fl");
  if (!common) typePrefixes[3864020909].insert("inv");
  if (!common) typePrefixes[3864020909].insert("m_cell");
  typePrefixes[3864020909].insert("n");
  if (!common) typePrefixes[3864020909].insert("pt");
  typePrefixes[3864020909].insert("wd");
  typePrefixes[3867655596].insert("a");
  if (!common) typePrefixes[3867655596].insert("blend");
  if (!common) typePrefixes[3867655596].insert("constraint");
  typePrefixes[3867655596].insert("dw");
  if (!common) typePrefixes[3867655596].insert("follower");
  typePrefixes[3867655596].insert("m_a");
  if (!common) typePrefixes[3867655596].insert("m_cell");
  typePrefixes[3867655596].insert("n");
  if (!common) typePrefixes[3867655596].insert("pn");
  typePrefixes[3867655596].insert("pt");
  if (!common) typePrefixes[3867655596].insert("sz");
  typePrefixes[3867655596].insert("u");
  typePrefixes[3877855748].insert("fl");
  typePrefixes[3955716320].insert("q");
  typePrefixes[4111826321].insert("transform");
  typePrefixes[4121727419].insert("id");
}

void signal_callback_handler(int signum) {
  terminating = true;
}

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
    checksumNonRef = fieldChecksumNonRef;
  }
  else if (hashType == 2) {
    checksum = gbidChecksum;
    checksumNonRef = gbidChecksumNonRef;
  }

  if (!isatty(0)) {
    size_t uTmp;
    std::cin >> std::hex >> uTmp;

    while (std::cin) {
      addChecksum(checksumMatch, uTmp);
      std::cin >> std::hex >> uTmp;
    }
  }

  if (hashType == 0 && checksumMatch.size() == 0) {
    std::ifstream hashes("../unfound_hashes.txt");
    size_t uTmp;
    hashes >> std::hex >> uTmp;

    while (hashes) {
      addChecksum(checksumMatch, uTmp);
      hashes >> std::hex >> uTmp;
    }
  } else if(hashType == 1 && checksumMatch.size() == 0) {
    std::ifstream hashes("../unfound_field_hashes.txt");
    size_t uTmp;

    hashes >> std::hex >> uTmp;
    while (hashes) {
      addChecksum(checksumMatch, uTmp);
      hashes >> std::hex >> uTmp;
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

  int32_t dictmax = dict.size();
  std::map<std::string, bool> dictmap;

  if (!wordsOnly) {
    for (const auto &baseelem : defaultDict) {
      dictmap[baseelem] = true;
    }
  }

  if (useDict) {
    if (dictPathOrString == "../english_dict.txt") {
      for (const auto &baseelem : getDict("../dict.txt")) {
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

    for (const auto &baseelem : getDict(dictPathOrString)) {
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

  if (hashType == 1) {
    if (noPrefix) {
      if (subdict[0].size() < 1) {
        std::transform(dict.cbegin(), dict.cend(), std::back_inserter(subdict[0]), [](std::string s) {
          if (!s.empty()) {
              s[0] = std::tolower(s[0]);
          }
    
          return s;
        });
      }
    }
    else {
      loadFieldTypeMap(useCommonPrefixes);

      if (subdict[0].size() < 1) {
        std::map<std::string, bool> prefixMap;

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
