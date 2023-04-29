/**
 * Definition: t366480b8
 * Hash: 366480b8
 */

#include "t366480b8.h"

void t366480b8::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&eTier, base, ptr);
}
