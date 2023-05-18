/**
 * Definition: StoryboardDefinition
 * Hash: a83c7e92
 */

#include "StoryboardDefinition.h"

void StoryboardDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&unk_97f94e0, base, current);
  current = ptr + 0x20;
  readData(&arChildControls, base, current);
  current = ptr + 0x30;
  readData(&unk_1722198, base, current);
  ptr += 0x48;
}
