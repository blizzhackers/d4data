/**
 * Definition: MonsterFamilyDefinition
 * Hash: 622e41f3
 */

#include "MonsterFamilyDefinition.h"

void MonsterFamilyDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&unk_cc6abab, base, ptr);
}
