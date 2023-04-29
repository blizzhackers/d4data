/**
 * Definition: SetItemBonusDefinition
 * Hash: da437ab
 */

#include "SetItemBonusDefinition.h"

void SetItemBonusDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&ptTiers, base, ptr);
}
