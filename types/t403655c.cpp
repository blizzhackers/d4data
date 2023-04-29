/**
 * Definition: t403655c
 * Hash: 403655c
 */

#include "t403655c.h"

void t403655c::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&snoWorld, base, ptr);
  readData(&unk_c7b2b18, base, ptr);
}
