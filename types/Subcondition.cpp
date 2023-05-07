/**
 * Definition: Subcondition
 * Hash: df741cd1
 */

#include "Subcondition.h"

void Subcondition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  ptr += 0x18;
}
