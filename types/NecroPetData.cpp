/**
 * Definition: NecroPetData
 * Hash: 69ebc9fa
 */

#include "NecroPetData.h"

void NecroPetData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&eUnitType, base, current);
  ptr += 0x4;
}
