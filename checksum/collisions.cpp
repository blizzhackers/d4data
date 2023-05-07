#include <iostream>
#include <sstream>
#include <vector>
#include <unistd.h>
#include <algorithm>
#include "../dict.h"

uint32_t tmp[64]{ 0 };
std::vector<uint32_t> checksumMatch;
bool hashType = 0;

std::vector<std::string> prefix;
auto customPrefix = false;
std::vector<std::string> dict;

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
  std::string ret = prefix[tmp[0]];

  for (int32_t c = 1; c < max; c++) {
    ret = ret + dict[tmp[c]];
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

    for (int c = 0; c < checksumMatch.size(); c++) {
      if(wordChecksum == checksumMatch[c]) {
        std::cout << "  " << std::hex << checksumMatch[c] << ": " << (word) << std::endl;
        break;
      }
    }

    return;
  }

  if (pos) {
    for (uint32_t c = 1; c < dict.size(); c++) {
      tmp[pos] = c;
      collisions(pos - 1, max);
    }
  }
  else if (hashType == 1) {
    for (uint32_t c = 0; c < prefix.size(); c++) {
      tmp[pos] = c;
      collisions(pos - 1, max);
    }
  }
}

int main(int argc, char *argv[]) {
  bool gettingPrefix = false;

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
      else if(arg[0] == '-') {
        // discard unknown option
      }
      else if(gettingPrefix) {
        prefix.push_back(arg);
        gettingPrefix = false;
        customPrefix = true;
      }
      else {
        uint32_t tmp = 0;
        std::stringstream ss;

        ss << std::hex << arg;
        ss >> tmp;
        checksumMatch.push_back(tmp);
      }
    }
  }

  if (!isatty(0)) {
    size_t tmp;
    std::cin >> std::hex >> tmp;

    while (std::cin) {
      checksumMatch.push_back(tmp);
      std::cin >> std::hex >> tmp;
    }
  }

  int32_t dictmax = dict.size();
  std::unordered_map<std::string, bool> dictmap;

  for (const auto baseelem : getDict()) {
    if (baseelem.length()) {
      std::string elem = baseelem;
      std::string newelem = elem;
      std::string newelem2 = elem;

      std::transform(newelem.begin(), newelem.end(), newelem.begin(), [](unsigned char c){ return std::toupper(c); });
      std::transform(newelem2.begin(), newelem2.end(), newelem2.begin(), [](unsigned char c){ return std::tolower(c); });

      if (hashType == 1) {
        dictmap[elem] = true;
      }

      if (hashType != 0) {
        dictmap[newelem2] = true;
      }

      if (hashType != 2) {
        newelem2 = newelem.substr(0, 1) + newelem2.substr(1);
        dictmap[newelem] = true;
        dictmap[newelem2] = true;
      }
    }
  }

  for (const auto elem : dictmap) {
    dict.push_back(elem.first);
  }

  if (hashType == 1 && !customPrefix) {
    prefix = getPrefixes();
  }

  if (checksumMatch.size()) {
    std::cerr << "Matching " << checksumMatch.size() << " hashes." << std::endl;
    for (uint32_t c = 1; c < sizeof(tmp) / sizeof(uint32_t); c++) {
      std::cerr << "Length: " << (c + 1) << std::endl;
      collisions(c, c + 1);
    }
  }

  return 0;
}
