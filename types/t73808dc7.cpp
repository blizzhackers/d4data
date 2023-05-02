/**
 * Definition: t73808dc7
 * Hash: 73808dc7
 */

#include "t73808dc7.h"

void t73808dc7::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_cf3ee, base, current);
  current = ptr + 0x4;
  readData(&dwRank, base, current);
  ptr += 0x8;
}
