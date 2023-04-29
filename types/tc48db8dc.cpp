/**
 * Definition: tc48db8dc
 * Hash: c48db8dc
 */

#include "tc48db8dc.h"

void tc48db8dc::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&flRadius, base, ptr);
  readData(&flHeight, base, ptr);
}
