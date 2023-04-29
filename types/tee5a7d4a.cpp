/**
 * Definition: tee5a7d4a
 * Hash: ee5a7d4a
 */

#include "tee5a7d4a.h"

void tee5a7d4a::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_ebf9bb4, base, ptr);
  readData(&flValue, base, ptr);
}
