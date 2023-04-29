/**
 * Definition: t5b3d8ec5
 * Hash: 5b3d8ec5
 */

#include "t5b3d8ec5.h"

void t5b3d8ec5::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_12bca72, base, ptr);
  readData(&unk_3989443, base, ptr);
  readData(&arDyeList, base, ptr);
}
