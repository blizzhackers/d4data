/**
 * Definition: t824d382
 * Hash: 824d382
 */

#include "t824d382.h"

void t824d382::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tEntries, base, ptr);
}
