/**
 * Definition: GameBalanceDefinition
 * Hash: 4e834e29
 */

#include "GameBalanceDefinition.h"

void GameBalanceDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&eGameBalanceType, base, ptr);
  readData(&bIgnoreOnLoad, base, ptr);
  readData(&ptData, base, ptr);
  readData(&ptPostprocessed, base, ptr);
}
