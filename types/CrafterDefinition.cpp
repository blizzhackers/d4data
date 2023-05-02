/**
 * Definition: CrafterDefinition
 * Hash: c7bf37d0
 */

#include "CrafterDefinition.h"

void CrafterDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwNextID, base, current);
  current = ptr + 0xc;
  readData(&eCrafterType, base, current);
  current = ptr + 0x10;
  readData(&arTabs, base, current);
  current = ptr + 0x20;
  readData(&unk_19e7a72, base, current);
  current = ptr + 0x30;
  readData(&unk_3668490, base, current);
  current = ptr + 0x40;
  readData(&unk_aa9dad7, base, current);
  ptr += 0x50;
}
