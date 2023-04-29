/**
 * Definition: ActivityDefinition
 * Hash: 97f97b16
 */

#include "ActivityDefinition.h"

void ActivityDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&tMetadata, base, ptr);
  readData(&tLinks, base, ptr);
  readData(&snoname, base, ptr);
  readData(&unk_a0a2ac5, base, ptr);
  readData(&unk_c2e08fe, base, ptr);
}
