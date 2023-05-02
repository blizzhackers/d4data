/**
 * Definition: RewardDefinition
 * Hash: 9bb1ffee
 */

#include "RewardDefinition.h"

void RewardDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&uID, base, current);
  current = ptr + 0x4;
  readData(&tType, base, current);
  current = ptr + 0x8;
  readData(&uFlags, base, current);
  current = ptr + 0xc;
  readData(&tCurrency, base, current);
  current = ptr + 0x10;
  readData(&uQuantity, base, current);
  current = ptr + 0x14;
  readData(&snoItem, base, current);
  current = ptr + 0x18;
  readData(&snoPlayerTitle, base, current);
  current = ptr + 0x1c;
  readData(&snoStoreProduct, base, current);
  ptr += 0x20;
}
