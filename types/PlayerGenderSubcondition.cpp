/**
 * Definition: PlayerGenderSubcondition
 * Hash: c5a97f53
 */

#include "PlayerGenderSubcondition.h"

void PlayerGenderSubcondition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&eGender, base, current);
  ptr += 0x20;
}
