#include <iostream>
#include <sstream>

char tmp[64]{ 0 };
uint32_t *checksumMatch;
uint32_t checksumMatchSize = 0;

uint32_t checksum(std::string str) {
  uint32_t hash = 0;
  for (size_t i = 0; i < str.length(); i++) {
    hash = hash * 33 + str[i];
  }
  return hash & 0xFFFFFFF;
}

void collisions(long pos) {
  if (pos == -1) {
    for (int c = 0; c < checksumMatchSize; c++) {
      if(checksum(tmp) == checksumMatch[c]) {
        std::cout << "  " << std::hex << checksumMatch[c] << ": " << tmp << std::endl;
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

    checksumMatchSize = argc - 1;
    checksumMatch = new uint32_t[checksumMatchSize];

    for (int c = 1; c < argc; c++) {
      uint32_t tmp = 0;
      std::stringstream ss;
      ss << std::hex << argv[c];
      ss >> tmp;
      checksumMatch[c - 1] = tmp;
      if (c < 2) {
        std::cerr << "Matching: " << std::hex << checksumMatch[c - 1];
      } else {
        std::cerr << ", " << std::hex << checksumMatch[c - 1];
      }
    }

    std::cerr << std::endl;

    for (uint32_t c = 0; c < sizeof(tmp); c++) {
      std::cerr << "Length: " << c << std::endl;
      collisions(c);
    }
  }

  return 0;
}
