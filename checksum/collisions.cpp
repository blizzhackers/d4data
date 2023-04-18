#include <iostream>
#include <sstream>

char pool[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_";
char tmp[64]{ 0 };
uint32_t checksumMatch = 0;

uint32_t checksum(std::string str) {
  uint32_t hash = 0;
  for (size_t i = 0; i < str.length(); i++) {
    hash = hash * 33 + str[i];
  }
  return hash;
}

void collisions(long pos) {
  if (pos == -1) {
    if(checksum(tmp) == checksumMatch) {
      std::cout << tmp << std::endl;
    }

    return;
  }

  for (int c = 0; c < sizeof(pool) - 1; c++) {
    tmp[pos] = pool[c];
    collisions(pos - 1);
  }
}

int main(int argc, char *argv[]) {
  if (argc > 1) {
    unsigned int x;
    std::stringstream ss;
    ss << std::hex << argv[1];
    ss >> checksumMatch;

    for (uint32_t c = 0; c < sizeof(tmp); c++) {
      collisions(c);
    }
  }

  return 0;
}
