/**
 * Definition: tbb74a93b
 * Hash: bb74a93b
 */

#include "tbb74a93b.h"

void tbb74a93b::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_b604ea1, base, ptr);
}
