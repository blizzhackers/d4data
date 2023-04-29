/**
 * Definition: tf692c2c0
 * Hash: f692c2c0
 */

#include "tf692c2c0.h"

void tf692c2c0::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_91a7640, base, ptr);
}
