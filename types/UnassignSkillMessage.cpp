/**
 * Definition: UnassignSkillMessage
 * Hash: 8b782c6c
 */

#include "UnassignSkillMessage.h"

void UnassignSkillMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&nSlot, base, current);
  current = ptr + 0x14;
  readData(&nEnchantSlot, base, current);
  current = ptr + 0x18;
  readData(&unk_c5e6abf, base, current);
  ptr += 0x1c;
}
