/**
 * Definition: t6dfbcf0d
 * Hash: 6dfbcf0d
 */

#include "t6dfbcf0d.h"

void t6dfbcf0d::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&snoPower, base, ptr);
  readData(&unk_53f5f18, base, ptr);
}
