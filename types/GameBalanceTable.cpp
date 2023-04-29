/**
 * Definition: GameBalanceTable
 * Hash: 4ef1608
 */

#include "GameBalanceTable.h"

void GameBalanceTable::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
}
