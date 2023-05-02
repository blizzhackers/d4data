/**
 * Definition: tda21c503
 * Hash: da21c503
 */

#include "tda21c503.h"

void tda21c503::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_a3b27b4, base, current);
  ptr += 0x10;
}
