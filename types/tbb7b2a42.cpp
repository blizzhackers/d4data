/**
 * Definition: tbb7b2a42
 * Hash: bb7b2a42
 */

#include "tbb7b2a42.h"

void tbb7b2a42::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_f9c5be7, base, ptr);
}
