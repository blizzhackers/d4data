/**
 * Definition: WallDefinition
 * Hash: e4a7d659
 */

#include "WallDefinition.h"

void WallDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&tInstanceData, base, current);
  ptr += 0xa0;
}
