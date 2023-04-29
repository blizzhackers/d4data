/**
 * Definition: taf401a3a
 * Hash: af401a3a
 */

#include "taf401a3a.h"

void taf401a3a::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&unk_c0222bf, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&snoWorldState, base, ptr);
  readData(&nValue, base, ptr);
}
