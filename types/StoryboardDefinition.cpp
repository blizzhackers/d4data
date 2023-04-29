/**
 * Definition: StoryboardDefinition
 * Hash: a83c7e92
 */

#include "StoryboardDefinition.h"

void StoryboardDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&unk_97f94e0, base, ptr);
  readData(&unk_4569eb, base, ptr);
  readData(&unk_1722198, base, ptr);
}
