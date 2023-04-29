/**
 * Definition: WallDefinition
 * Hash: e4a7d659
 */

#include "WallDefinition.h"

void WallDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&unk_a1f5263, base, ptr);
}
