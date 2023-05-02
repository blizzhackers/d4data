/**
 * Definition: GameFlagSubcondition
 * Hash: 6bb2bca5
 */

#include "GameFlagSubcondition.h"

void GameFlagSubcondition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&szLabel, base, current);
  ptr += 0x98;
}
