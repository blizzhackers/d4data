/**
 * Definition: ItemTypeDefinition
 * Hash: 87805f1a
 */

#include "ItemTypeDefinition.h"

void ItemTypeDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwFlags, base, current);
  current = ptr + 0xc;
  readData(&ePackSlot, base, current);
  current = ptr + 0x10;
  readData(&arBodySlots, base, current);
  current = ptr + 0x20;
  readData(&arItemLabels, base, current);
  current = ptr + 0x30;
  readData(&eWeaponClass, base, current);
  current = ptr + 0x34;
  readData(&unk_18ee4ac, base, current);
  current = ptr + 0x38;
  readData(&unk_b2500f1, base, current);
  current = ptr + 0x3c;
  readData(&unk_4811bbe, base, current);
  current = ptr + 0x40;
  readData(&unk_cc5ef53, base, current);
  current = ptr + 0x44;
  readData(&unk_9981e08, base, current);
  current = ptr + 0x48;
  readData(&unk_9e2e500, base, current);
  current = ptr + 0x4c;
  readData(&unk_69d0449, base, current);
  current = ptr + 0x50;
  readData(&unk_f03343a, base, current);
  current = ptr + 0x54;
  readData(&unk_9d54616, base, current);
  current = ptr + 0x58;
  readData(&unk_b5a1c2b, base, current);
  current = ptr + 0x5c;
  readData(&dwItemLabelMask, base, current);
  current = ptr + 0x68;
  readData(&unk_60c6aca, base, current);
  current = ptr + 0x78;
  readData(&unk_4ec8d93, base, current);
  ptr += 0x80;
}
