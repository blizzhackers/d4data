/**
 * Definition: tc5e0c95f
 * Hash: c5e0c95f
 */

#include "tc5e0c95f.h"

void tc5e0c95f::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwMinLevel, base, current);
  current = ptr + 0x4;
  readData(&dwMaxLevel, base, current);
  current = ptr + 0x8;
  readData(&unk_99e9721, base, current);
  current = ptr + 0xc;
  readData(&unk_d7c9b5a, base, current);
  ptr += 0x10;
}
