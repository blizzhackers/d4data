/**
 * Definition: tc388f239
 * Hash: c388f239
 */

#include "tc388f239.h"

void tc388f239::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tEntries, base, ptr);
}
