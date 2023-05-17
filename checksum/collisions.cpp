#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <unordered_set>
#include <unistd.h>
#include <algorithm>
#include <filesystem>
#include "../dict.h"

std::string rootPath = "";

uint32_t tmp[64]{ 0 };
uint32_t maxPos = sizeof(tmp) / sizeof(uint32_t);
uint32_t minPos = 0;

std::unordered_set<uint32_t> checksumMatch;
bool hashType = 0, outputLog = true;

std::vector<std::string> prefix;
std::vector<std::string> dict;
std::vector<std::string> suffix;
std::unordered_map<std::string, bool> stringUsed;

uint32_t checksum(std::string str) {
  if (hashType == 2) { // gbid strings are lowercased
    std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c){ return std::tolower(c); });
  }

  uint32_t hash = 0;

  for (size_t i = 0; i < str.length(); i++) {
    hash = (hash << 5) + hash + (unsigned char)str[i];
  }

  // field names have an additional mask
  return hashType == 1 ? (hash & 0xfffffff) : hash;
}

auto getDictSize(long pos, long max) {
  if (pos == 0 && prefix.size() > 0) {
    return prefix.size();
  }

  if (pos == max - 1 && suffix.size() > 0) {
    return suffix.size();
  }

  return dict.size();
}

std::string getDictEntry(long index, long pos, long max) {
  if (pos == 0 && prefix.size() > 0) {
    return prefix[index];
  }

  if (pos == max - 1 && suffix.size() > 0) {
    return suffix[index];
  }

  return dict[index];
}

std::string getWord(int32_t max) {
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

void collisions(long pos, long max) {
  if (pos == -1) {
    std::string word = getWord(max);
    uint32_t wordChecksum = checksum(word);

    if(checksumMatch.count(wordChecksum) > 0 && !stringUsed[word]) {
      std::cout << "  " << std::hex << wordChecksum << ": " << word << std::endl;
      stringUsed[word] = true;

      if (outputLog) {
        std::stringstream outfilePath;

        if (hashType == 0) {
          outfilePath << "type/";
        }
        else if (hashType == 1) {
          outfilePath << "field/";
        }
        else if (hashType == 1) {
          outfilePath << "gbid/";
        }

        outfilePath << std::hex << wordChecksum << ".yml";

        std::ofstream outfile(outfilePath.str(), std::ios::app);
        outfile << std::hex << wordChecksum << ": " << word << std::endl;
        outfile.close();
      }
    }

    return;
  }

  long cmax = getDictSize(pos, max);

  for (long c = 0; c < cmax; c++) {
    tmp[pos] = c;
    collisions(pos - 1, max);
  }
}

std::vector<std::string> getDefaultDict() {
    std::vector<std::string> ret;
    ret.push_back("0");
    ret.push_back("1");
    ret.push_back("2");
    ret.push_back("3");
    ret.push_back("4");
    ret.push_back("5");
    ret.push_back("6");
    ret.push_back("7");
    ret.push_back("8");
    ret.push_back("9");
    ret.push_back("_");
    ret.push_back("a");
    ret.push_back("b");
    ret.push_back("c");
    ret.push_back("d");
    ret.push_back("e");
    ret.push_back("f");
    ret.push_back("g");
    ret.push_back("h");
    ret.push_back("i");
    ret.push_back("j");
    ret.push_back("k");
    ret.push_back("l");
    ret.push_back("m");
    ret.push_back("n");
    ret.push_back("o");
    ret.push_back("p");
    ret.push_back("q");
    ret.push_back("r");
    ret.push_back("s");
    ret.push_back("t");
    ret.push_back("u");
    ret.push_back("v");
    ret.push_back("w");
    ret.push_back("x");
    ret.push_back("y");
    ret.push_back("z");
    ret.push_back("A");
    ret.push_back("B");
    ret.push_back("C");
    ret.push_back("D");
    ret.push_back("E");
    ret.push_back("F");
    ret.push_back("G");
    ret.push_back("H");
    ret.push_back("I");
    ret.push_back("J");
    ret.push_back("K");
    ret.push_back("L");
    ret.push_back("M");
    ret.push_back("N");
    ret.push_back("O");
    ret.push_back("P");
    ret.push_back("Q");
    ret.push_back("R");
    ret.push_back("S");
    ret.push_back("T");
    ret.push_back("U");
    ret.push_back("V");
    ret.push_back("W");
    ret.push_back("X");
    ret.push_back("Y");
    ret.push_back("Z");
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

int main(int argc, char *argv[]) {
  bool gettingPrefix = false;
  bool gettingSuffix = false;
  bool gettingMin = false;
  bool gettingMax = false;
  bool useDict = true;
  bool wordsOnly = false;
  bool noPrefix = false;
  bool ignoreAllCaps = true;

  int pos = 0;

  for (int c = 0; argv[0][c] && c < 128; c++) {
    if (argv[0][c] == '/') {
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
        gettingPrefix = true;
      }
      else if(arg == "--suffix") {
        gettingSuffix = true;
      }
      else if(arg == "--no-prefix") {
        prefix.clear();
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
      else if(arg == "--no-log") {
        outputLog = false;
      }
      else if(arg == "--no-dict") {
        useDict = false;
      }
      else if(arg[0] == '-') {
        // discard unknown option
      }
      else if(gettingPrefix) {
        prefix.push_back(arg);
        gettingPrefix = false;
      }
      else if(gettingSuffix) {
        suffix.push_back(arg);
        gettingSuffix = false;
      }
      else if(gettingMin) {
        uint32_t uTmp = 0;
        std::stringstream ss;

        ss << arg;
        ss >> uTmp;

        if (uTmp >= 1 && uTmp < sizeof(tmp) / sizeof(uint32_t)) {
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

        if (uTmp >= 1 && uTmp < sizeof(tmp) / sizeof(uint32_t)) {
          maxPos = uTmp;
          std::cerr << "Using max of " << maxPos << std::endl;
        }

        gettingMax = false;
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

  if (!isatty(0)) {
    size_t uTmp;
    std::cin >> std::hex >> uTmp;

    while (std::cin) {
      checksumMatch.insert(uTmp);
      std::cin >> std::hex >> uTmp;
    }
  }

  int32_t dictmax = dict.size();
  std::unordered_map<std::string, bool> dictmap;

  if (!wordsOnly) {
    for (const auto baseelem : getDefaultDict()) {
      if (baseelem[0] < 'A' || baseelem[0] < 'Z') {
        dictmap[baseelem] = true;
      }
    }
  }

  if (useDict) {
    for (const auto baseelem : (useDict ? getDict() : getDefaultDict())) {
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

  if (hashType == 1 && !noPrefix && prefix.size() < 1) {
    prefix = getPrefixes();
    prefix.push_back("");
  }

  if (checksumMatch.size()) {
    std::cerr << "Matching " << checksumMatch.size() << " hashes." << std::endl;
    for (uint32_t c = minPos; c < maxPos; c++) {
      std::cerr << "Length: " << (c + 1) << std::endl;
      collisions(c, c + 1);
    }
  }

  return 0;
}
