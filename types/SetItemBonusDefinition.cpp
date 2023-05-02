/**
 * Definition: SetItemBonusDefinition
 * Hash: da437ab
 */

#include "SetItemBonusDefinition.h"

void SetItemBonusDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&ptTiers, base, current);
  ptr += 0x18;
}
