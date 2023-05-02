/**
 * Definition: ConditionDefinition
 * Hash: ee9a810
 */

#include "ConditionDefinition.h"

void ConditionDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&unk_7e154cf, base, current);
  ptr += 0x20;
}
