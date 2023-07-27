#include <iostream>

uint32_t checksum(std::string str) {
  uint32_t hash = 0;
  for (size_t i = 0; i < str.length(); i++) {
    hash = (hash << 5) + hash + str[i];
  }
  return hash;
}

int main(int argc, char *argv[]) {
  std::string tmp = "";

  for (int c = 1; c < argc; c++) {
    std::cout << std::hex << (checksum(argv[c]) & 0xFFFFFFF)<< std::dec << ": " << argv[c] << std::endl;
  }

  return 0;
}
