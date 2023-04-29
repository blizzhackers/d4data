/**
 * Definition: CollisionSettingsDefinition
 * Hash: 3d66fca6
 */

#include "CollisionSettingsDefinition.h"

void CollisionSettingsDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&tCollFlags, base, ptr);
  readData(&unk_a882afd, base, ptr);
  readData(&unk_54403ff, base, ptr);
}
