/**
 * Definition: ItemRequirementDefinition
 * Hash: e40b6a09
 */

#include "ItemRequirementDefinition.h"

void ItemRequirementDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&unk_8800554, base, current);
  current = ptr + 0xc;
  readData(&bDualWielding, base, current);
  current = ptr + 0x10;
  readData(&unk_901b272, base, current);
  current = ptr + 0x14;
  readData(&unk_24a783, base, current);
  current = ptr + 0x18;
  readData(&unk_9f5f4cb, base, current);
  current = ptr + 0x20;
  readData(&arItemLabels, base, current);
  current = ptr + 0x30;
  readData(&unk_853db38, base, current);
  ptr += 0x38;
}
