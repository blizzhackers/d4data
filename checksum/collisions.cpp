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

std::string getWord(int32_t max) {
  std::string ret = "";

  for (int32_t c = 0; c < max; c++) {
    ret = ret + ((c || prefix.size() < 1) ? dict[tmp[c]] : prefix[tmp[0]]);
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
    int32_t sum = 1;

    for (int32_t c = 1; c < max; c++) {
      if (tmp[c]) {
        sum++;
      }
    }

    if (sum < max) {
      return;
    }

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

  if (pos || prefix.size() < 1) {
    for (uint32_t c = 1; c < dict.size(); c++) {
      tmp[pos] = c;
      collisions(pos - 1, max);
    }
  }
  else {
    for (uint32_t c = 0; c < prefix.size(); c++) {
      tmp[pos] = c;
      collisions(pos - 1, max);
    }
  }
}

std::vector<std::string> getDefaultDict() {
    std::vector<std::string> ret;
    ret.push_back("");
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
    return ret;
}

int main(int argc, char *argv[]) {
  bool gettingPrefix = false;
  bool gettingMin = false;
  bool gettingMax = false;
  bool useDict = true;

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
      else if(arg == "--no-prefix") {
        prefix.clear();
        prefix.push_back("");
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

  for (const auto baseelem : (useDict ? getDict() : getDefaultDict())) {
    if (baseelem.length()) {
      std::string elem = baseelem;
      std::string newelem = elem;
      std::string newelem2 = elem;

      std::transform(newelem.begin(), newelem.end(), newelem.begin(), [](unsigned char c){ return std::toupper(c); });
      std::transform(newelem2.begin(), newelem2.end(), newelem2.begin(), [](unsigned char c){ return std::tolower(c); });

      if (hashType != 2) {
        dictmap[elem] = true;
      }

      dictmap[newelem2] = true;

      if (hashType != 2) {
        newelem2 = newelem.substr(0, 1) + newelem2.substr(1);
        dictmap[newelem2] = true;
      }
    }
  }

  for (const auto elem : dictmap) {
    dict.push_back(elem.first);
  }

  if (hashType == 1 && prefix.size() < 1) {
    prefix = getPrefixes();
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
