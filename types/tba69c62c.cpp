/**
 * Definition: tba69c62c
 * Hash: ba69c62c
 */

#include "tba69c62c.h"

void tba69c62c::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_9af876f, base, ptr);
}
