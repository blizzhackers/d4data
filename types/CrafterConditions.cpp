/**
 * Definition: CrafterConditions
 * Hash: 26d3dba1
 */

#include "CrafterConditions.h"

void CrafterConditions::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&arConditionData, base, current);
  ptr += 0x10;
}
