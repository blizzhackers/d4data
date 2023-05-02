/**
 * Definition: AspectDefinition
 * Hash: d055ea89
 */

#include "AspectDefinition.h"

void AspectDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&snoAffix, base, current);
  ptr += 0xc;
}
