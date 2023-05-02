/**
 * Definition: t7110c154
 * Hash: 7110c154
 */

#include "t7110c154.h"

void t7110c154::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoItemType, base, current);
  current = ptr + 0x4;
  readData(&snoPassivePower, base, current);
  current = ptr + 0x8;
  readData(&gbidRanks, base, current);
  current = ptr + 0x10;
  readData(&unk_872c837, base, current);
  ptr += 0x20;
}
