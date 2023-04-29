/**
 * Definition: t553ae3d5
 * Hash: 553ae3d5
 */

#include "t553ae3d5.h"

void t553ae3d5::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&unk_a0febeb, base, ptr);
}
