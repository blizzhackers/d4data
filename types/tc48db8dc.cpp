/**
 * Definition: tc48db8dc
 * Hash: c48db8dc
 */

#include "tc48db8dc.h"

void tc48db8dc::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&flRadius, base, current);
  current = ptr + 0x14;
  readData(&flHeight, base, current);
  ptr += 0x18;
}
