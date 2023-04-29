/**
 * Definition: GameFlagSubcondition
 * Hash: 6bb2bca5
 */

#include "GameFlagSubcondition.h"

void GameFlagSubcondition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&szLabel, base, ptr);
}
