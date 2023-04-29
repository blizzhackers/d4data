/**
 * Definition: t19e1543d
 * Hash: 19e1543d
 */

#include "t19e1543d.h"

void t19e1543d::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_8205294, base, ptr);
  readData(&arCrafters, base, ptr);
  readData(&unk_f37b35d, base, ptr);
  readData(&unk_13e0ecf, base, ptr);
  readData(&unk_c834d7a, base, ptr);
  readData(&unk_24fcd3d, base, ptr);
  readData(&unk_6ac8078, base, ptr);
  readData(&unk_2a2b3f7, base, ptr);
}
