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
  readData(&unk_a34d0af, base, current);
  current = ptr + 0x18;
  readData(&arTabs, base, current);
  current = ptr + 0x28;
  readData(&arRecipeTiers, base, current);
  current = ptr + 0x38;
  readData(&unk_3668490, base, current);
  current = ptr + 0x48;
  readData(&unk_aa9dad7, base, current);
  ptr += 0x58;
}
