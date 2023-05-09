/**
 * Definition: PlayerHealthSubcondition
 * Hash: 8e552474
 */

#include "PlayerHealthSubcondition.h"

void PlayerHealthSubcondition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x18;
  readData(&unk_c0222bf, base, current);
  current = ptr + 0x1c;
  readData(&dwPad, base, current);
  current = ptr + 0x20;
  readData(&unk_6ea5eed, base, current);
  ptr += 0x28;
}
