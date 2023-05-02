#include <iostream>
#include <sstream>
#include <vector>
#include <unistd.h>
#include <algorithm>

char tmp[64]{ 0 };
std::vector<uint32_t> checksumMatch;
std::string prefix = "";
std::string suffix = "";

uint32_t checksum(std::string str) {
  str = prefix + str + suffix;

  std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c){ return std::tolower(c); });
  uint32_t hash = 0;
  for (size_t i = 0; i < str.length(); i++) {
    hash = (hash << 5) + hash + (unsigned char)str[i];
  }

  return hash;
}

void collisions(long pos) {
  if (pos == -1) {
    for (int c = 0; c < checksumMatch.size(); c++) {
      if(checksum(tmp) == checksumMatch[c]) {
        std::cout << "  " << std::hex << checksumMatch[c] << ": " << (prefix + tmp + suffix) << std::endl;
        break;
      }
    }

    return;
  }

  if (pos > 0) {
    for (char c = '0'; c <= '9'; c++) {
      tmp[pos] = c;
      collisions(pos - 1);
    }
  }

  for (char c = 'A'; c <= 'Z'; c++) {
    tmp[pos] = c;
    collisions(pos - 1);
  }

  for (char c = 'a'; c <= 'z'; c++) {
    tmp[pos] = c;
    collisions(pos - 1);
  }

  tmp[pos] = '_';
  collisions(pos - 1);
}

int main(int argc, char *argv[]) {
  if (argc > 1) {
    unsigned int x;
    bool isPrefix = false;
    bool isSuffix = false;

    for (int c = 1; c < argc; c++) {
      std::string arg = argv[c];

      if (arg == "-p" || arg == "--prefix") {
        isPrefix = true;
      }
      else if(arg == "-s" || arg == "--suffix") {
        isSuffix = true;
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
  
  if (checksumMatch.size()) {
    std::cerr << "Matching " << checksumMatch.size() << " hashes." << std::endl;
    for (uint32_t c = 0; c < sizeof(tmp); c++) {
      std::cerr << "Length: " << (c + 1) << std::endl;
      collisions(c);
    }
  }

  return 0;
}
