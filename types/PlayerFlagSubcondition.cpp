/**
 * Definition: PlayerFlagSubcondition
 * Hash: c7d77258
 */

#include "PlayerFlagSubcondition.h"

void PlayerFlagSubcondition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&szLabel, base, ptr);
}
