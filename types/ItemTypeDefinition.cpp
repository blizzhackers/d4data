/**
 * Definition: ItemTypeDefinition
 * Hash: 87805f1a
 */

#include "ItemTypeDefinition.h"

void ItemTypeDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwFlags, base, ptr);
  readData(&unk_32a72a6, base, ptr);
  readData(&arBodySlots, base, ptr);
  readData(&arItemLabels, base, ptr);
  readData(&eWeaponClass, base, ptr);
  readData(&unk_18ee4ac, base, ptr);
  readData(&unk_b2500f1, base, ptr);
  readData(&unk_4811bbe, base, ptr);
  readData(&unk_cc5ef53, base, ptr);
  readData(&unk_9981e08, base, ptr);
  readData(&unk_9e2e500, base, ptr);
  readData(&lUpdatePrivileges, base, ptr);
  readData(&unk_f03343a, base, ptr);
  readData(&unk_9d54616, base, ptr);
  readData(&unk_b5a1c2b, base, ptr);
  readData(&dwItemLabelMask, base, ptr);
  readData(&unk_60c6aca, base, ptr);
  readData(&unk_4ec8d93, base, ptr);
}
