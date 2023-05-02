/**
 * Definition: GameBalanceTable
 * Hash: 4ef1608
 */

#include "GameBalanceTable.h"

void GameBalanceTable::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  ptr += 0x10;
}
