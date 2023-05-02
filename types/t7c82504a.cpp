/**
 * Definition: t7c82504a
 * Hash: 7c82504a
 */

#include "t7c82504a.h"

void t7c82504a::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bInverse, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&snoItemType, base, current);
  current = ptr + 0x1c;
  readData(&unk_882d30e, base, current);
  ptr += 0x20;
}
