/**
 * Definition: tb42131c6
 * Hash: b42131c6
 */

#include "tb42131c6.h"

void tb42131c6::read(const char* base, char* &ptr) {
  readData(&dwOffset, base, ptr);
  readData(&dwCount, base, ptr);
}
