/**
 * Definition: tbb74a93b
 * Hash: bb74a93b
 */

#include "tbb74a93b.h"

void tbb74a93b::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x104;
  readData(&unk_b604ea1, base, current);
  ptr += 0x108;
}
