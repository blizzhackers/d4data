/**
 * Definition: t85f15dc7
 * Hash: 85f15dc7
 */

#include "t85f15dc7.h"

void t85f15dc7::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_dce541c, base, current);
  current = ptr + 0x14;
  readData(&snoPower, base, current);
  current = ptr + 0x18;
  readData(&dwRank, base, current);
  ptr += 0x1c;
}
