/**
 * Definition: MarkerSplineData
 * Hash: 58d579a7
 */

#include "MarkerSplineData.h"

void MarkerSplineData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_3580552, base, current);
  current = ptr + 0x14;
  readData(&unk_a3f1699, base, current);
  ptr += 0x18;
}
