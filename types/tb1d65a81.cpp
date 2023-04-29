/**
 * Definition: tb1d65a81
 * Hash: b1d65a81
 */

#include "tb1d65a81.h"

void tb1d65a81::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
}
