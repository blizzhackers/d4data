/**
 * Definition: DungeonAffixDefinition
 * Hash: 4859c8e7
 */

#include "DungeonAffixDefinition.h"

void DungeonAffixDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&nWeight, base, current);
  current = ptr + 0xc;
  readData(&unk_40a4411, base, current);
  current = ptr + 0x10;
  readData(&unk_6e1d9b8, base, current);
  current = ptr + 0x14;
  readData(&gbidAffixFamily, base, current);
  current = ptr + 0x18;
  readData(&unk_7f8b6b7, base, current);
  ptr += 0x28;
}
