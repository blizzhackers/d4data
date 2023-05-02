/**
 * Definition: t85177256
 * Hash: 85177256
 */

#include "t85177256.h"

void t85177256::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szTag, base, current);
  current = ptr + 0x4;
  readData(&unk_d343726, base, current);
  ptr += 0x8;
}
