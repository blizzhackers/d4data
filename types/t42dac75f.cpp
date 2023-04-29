/**
 * Definition: t42dac75f
 * Hash: 42dac75f
 */

#include "t42dac75f.h"

void t42dac75f::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&unk_2de4987, base, ptr);
  readData(&arConditions, base, ptr);
  readData(&bEnd, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&flSeconds, base, ptr);
}
