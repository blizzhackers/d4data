/**
 * Definition: t7a02a8d6
 * Hash: 7a02a8d6
 */

#include "t7a02a8d6.h"

void t7a02a8d6::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&nLevel, base, current);
  current = ptr + 0x4;
  readData(&snoCondition, base, current);
  current = ptr + 0x8;
  readData(&unk_fc97abe, base, current);
  ptr += 0xc;
}
