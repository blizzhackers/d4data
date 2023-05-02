/**
 * Definition: t5b4bfa41
 * Hash: 5b4bfa41
 */

#include "t5b4bfa41.h"

void t5b4bfa41::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bInverse, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  ptr += 0x18;
}
