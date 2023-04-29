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
  readData(&snoPlayerTitle, base, ptr);
  readData(&snoStoreProduct, base, ptr);
}
