/**
 * Definition: ItemRequirementDefinition
 * Hash: e40b6a09
 */

#include "ItemRequirementDefinition.h"

void ItemRequirementDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&unk_8800554, base, ptr);
  readData(&bDualWielding, base, ptr);
  readData(&unk_901b272, base, ptr);
  readData(&unk_24a783, base, ptr);
  readData(&unk_9f5f4cb, base, ptr);
  readData(&arItemLabels, base, ptr);
  readData(&unk_853db38, base, ptr);
}
