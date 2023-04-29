/**
 * Definition: DungeonAffixDefinition
 * Hash: 4859c8e7
 */

#include "DungeonAffixDefinition.h"

void DungeonAffixDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&nWeight, base, ptr);
  readData(&unk_40a4411, base, ptr);
  readData(&unk_6e1d9b8, base, ptr);
  readData(&gbidAffixFamily, base, ptr);
  readData(&unk_7f8b6b7, base, ptr);
}
