/**
 * Definition: CollisionSettingsDefinition
 * Hash: 3d66fca6
 */

#include "CollisionSettingsDefinition.h"

void CollisionSettingsDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&tCollFlags, base, current);
  current = ptr + 0x10;
  readData(&unk_a882afd, base, current);
  current = ptr + 0x14;
  readData(&unk_54403ff, base, current);
  ptr += 0x18;
}
