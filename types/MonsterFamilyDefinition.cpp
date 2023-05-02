/**
 * Definition: MonsterFamilyDefinition
 * Hash: 622e41f3
 */

#include "MonsterFamilyDefinition.h"

void MonsterFamilyDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&unk_cc6abab, base, current);
  ptr += 0x18;
}
