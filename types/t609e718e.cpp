/**
 * Definition: t609e718e
 * Hash: 609e718e
 */

#include "t609e718e.h"

void t609e718e::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&eFacing, base, ptr);
  readData(&unk_8a3d22d, base, ptr);
  readData(&unk_d1e17f4, base, ptr);
  readData(&pathRadius, base, ptr);
  readData(&pathHeight, base, ptr);
}
