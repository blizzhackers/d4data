/**
 * Definition: RewardDefinition
 * Hash: 9bb1ffee
 */

#include "RewardDefinition.h"

void RewardDefinition::read(const char* base, char* &ptr) {
  readData(&uID, base, ptr);
  readData(&tType, base, ptr);
  readData(&uFlags, base, ptr);
  readData(&tCurrency, base, ptr);
  readData(&uQuantity, base, ptr);
  readData(&snoItem, base, ptr);
  readData(&unk_b96d7f, base, ptr);
  readData(&unk_bf65cfe, base, ptr);
}
