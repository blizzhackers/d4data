/**
 * Definition: t2d6b1819
 * Hash: 2d6b1819
 */

#include "t2d6b1819.h"

void t2d6b1819::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&unk_74867e8, base, current);
  ptr += 0x1c;
}
