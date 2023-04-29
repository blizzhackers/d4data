/**
 * Definition: AspectDefinition
 * Hash: d055ea89
 */

#include "AspectDefinition.h"

void AspectDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&snoAffix, base, ptr);
}
