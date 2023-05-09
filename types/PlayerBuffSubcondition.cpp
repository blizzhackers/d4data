/**
 * Definition: PlayerBuffSubcondition
 * Hash: 2d67cd41
 */

#include "PlayerBuffSubcondition.h"

void PlayerBuffSubcondition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&snoBuffPower, base, current);
  current = ptr + 0x1c;
  readData(&unk_6c4bff7, base, current);
  ptr += 0x20;
}
