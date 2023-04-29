/**
 * Definition: tb5e9e0a3
 * Hash: b5e9e0a3
 */

#include "tb5e9e0a3.h"

void tb5e9e0a3::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&eFacing, base, ptr);
  readData(&unk_701ed06, base, ptr);
  readData(&pathRadius, base, ptr);
}
