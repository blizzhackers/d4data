/**
 * Definition: tfad28160
 * Hash: fad28160
 */

#include "tfad28160.h"

void tfad28160::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&nItemLabel, base, current);
  ptr += 0x20;
}
