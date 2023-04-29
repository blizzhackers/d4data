/**
 * Definition: t8dc7baa3
 * Hash: 8dc7baa3
 */

#include "t8dc7baa3.h"

void t8dc7baa3::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tEntries, base, ptr);
}
