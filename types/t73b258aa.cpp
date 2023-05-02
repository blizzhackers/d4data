/**
 * Definition: t73b258aa
 * Hash: 73b258aa
 */

#include "t73b258aa.h"

void t73b258aa::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_13bbc12, base, current);
  ptr += 0x38;
}
