/**
 * Definition: GameBalanceDefinition
 * Hash: 4e834e29
 */

#include "GameBalanceDefinition.h"

void GameBalanceDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&eGameBalanceType, base, current);
  current = ptr + 0xc;
  readData(&bIgnoreOnLoad, base, current);
  current = ptr + 0x10;
  readData(&ptData, base, current);
  current = ptr + 0x28;
  readData(&ptPostprocessed, base, current);
  ptr += 0x30;
}
