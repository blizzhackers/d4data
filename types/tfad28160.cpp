/**
 * Definition: tfad28160
 * Hash: fad28160
 */

#include "tfad28160.h"

void tfad28160::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&nItemLabel, base, ptr);
}
