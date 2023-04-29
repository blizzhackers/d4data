/**
 * Definition: t6f71323a
 * Hash: 6f71323a
 */

#include "t6f71323a.h"

void t6f71323a::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_799ca4d, base, ptr);
  readData(&snoOverridePower, base, ptr);
}
