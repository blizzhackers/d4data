/**
 * Definition: te9ff9a6f
 * Hash: e9ff9a6f
 */

#include "te9ff9a6f.h"

void te9ff9a6f::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&unk_2de4987, base, ptr);
  readData(&arConditions, base, ptr);
  readData(&bEnd, base, ptr);
  readData(&dwPad, base, ptr);
}
