/**
 * Definition: ActivityDefinition
 * Hash: 97f97b16
 */

#include "ActivityDefinition.h"

void ActivityDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&tMetadata, base, current);
  current = ptr + 0x10;
  readData(&tLinks, base, current);
  current = ptr + 0x20;
  readData(&snoname, base, current);
  current = ptr + 0x28;
  readData(&unk_a0a2ac5, base, current);
  current = ptr + 0x2c;
  readData(&unk_c2e08fe, base, current);
  ptr += 0x30;
}
