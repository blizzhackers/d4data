/**
 * Definition: t474afa29
 * Hash: 474afa29
 */

#include "t474afa29.h"

void t474afa29::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&flDistance, base, ptr);
}
