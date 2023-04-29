/**
 * Definition: CrafterDefinition
 * Hash: c7bf37d0
 */

#include "CrafterDefinition.h"

void CrafterDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwNextID, base, ptr);
  readData(&eCrafterType, base, ptr);
  readData(&arTabs, base, ptr);
  readData(&unk_19e7a72, base, ptr);
  readData(&unk_3668490, base, ptr);
  readData(&unk_aa9dad7, base, ptr);
}
