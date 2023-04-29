/**
 * Definition: ConditionDefinition
 * Hash: ee9a810
 */

#include "ConditionDefinition.h"

void ConditionDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&unk_7e154cf, base, ptr);
}
