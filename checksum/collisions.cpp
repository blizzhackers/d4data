#include <iostream>
#include <sstream>
#include <vector>
#include <unistd.h>
#include <algorithm>

char tmp[64]{ 0 };
std::vector<uint32_t> checksumMatch;
std::string prefix = "";
std::string suffix = "";
bool useCaps = true, useLowers = true, useDigits = false, useUnderscore = false, capFirst = false;
bool hashType = 0;
uint32_t startingHash = 0;

uint32_t checksum(std::string str) {
  str = str + suffix;

  if (hashType == 2) { // gbid strings are lowercased
    std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c){ return std::tolower(c); });
  }

  uint32_t hash = startingHash;

  for (size_t i = 0; i < str.length(); i++) {
    hash = (hash << 5) + hash + (unsigned char)str[i];
  }

  // field names have an additional mask
  return hashType == 1 ? (hash & 0xfffffff) : hash;
}

void collisions(long pos) {
  if (pos == -1) {
    uint32_t tmpChecksum = checksum(tmp);

    for (int c = 0; c < checksumMatch.size(); c++) {
      if(tmpChecksum == checksumMatch[c]) {
        std::cout << "  " << std::hex << checksumMatch[c] << ": " << (prefix + tmp + suffix) << std::endl;
        break;
      }
    }

    return;
  }

  if (hashType == 2 || useLowers && (pos > 0 || !capFirst)) {
    for (char c = 'a'; c <= 'z'; c++) {
      tmp[pos] = c;
      collisions(pos - 1);
    }
  }

  if (hashType != 2 && useCaps) {
    for (char c = 'A'; c <= 'Z'; c++) {
      tmp[pos] = c;
      collisions(pos - 1);
    }
  }

  if (useDigits && pos > 0) {
    for (char c = '0'; c <= '9'; c++) {
      tmp[pos] = c;
      collisions(pos - 1);
    }
  }

  if (useUnderscore && (pos > 0 || !capFirst)) {
    tmp[pos] = '_';
  }

  collisions(pos - 1);
}

int main(int argc, char *argv[]) {
  if (argc > 1) {
    unsigned int x;
    bool isPrefix = false;
    bool isSuffix = false;

    for (int c = 1; c < argc; c++) {
      std::string arg = argv[c];

      if (arg == "--prefix") {
        isPrefix = true;
      }
      else if(arg == "--suffix") {
        isSuffix = true;
      }
      else if(arg == "--field") {
        hashType = 1;
      }
      else if(arg == "--gbid") {
        hashType = 2;
      }
      else if(arg == "--cap-first") {
        capFirst = true;
      }
      else if(arg == "--digits") {
        useDigits = true;
      }
      else if(arg == "--underscore") {
        useUnderscore = true;
      }
      else if(arg[0] == '-') {
        // discard unknown option
      }
      else if (isPrefix) {
        prefix = arg;
        std::cerr << "Using prefix: " << prefix << std::endl;
        isPrefix = false;
      }
      else if (isSuffix) {
        suffix = arg;
        std::cerr << "Using suffix: " << suffix << std::endl;
        isSuffix = false;
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

  startingHash = checksum(prefix);
  
  if (checksumMatch.size()) {
    std::cerr << "Matching " << checksumMatch.size() << " hashes." << std::endl;
    for (uint32_t c = 0; c < sizeof(tmp); c++) {
      std::cerr << "Length: " << (c + 1) << std::endl;
      collisions(c);
    }
  }

  return 0;
}
