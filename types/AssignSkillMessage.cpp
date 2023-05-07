/**
 * Definition: AssignSkillMessage
 * Hash: 1d99229
 */

#include "AssignSkillMessage.h"

void AssignSkillMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&snoPower, base, current);
  current = ptr + 0x14;
  readData(&nSlot, base, current);
  current = ptr + 0x18;
  readData(&nEnchantSlot, base, current);
  current = ptr + 0x1c;
  readData(&unk_c5e6abf, base, current);
  current = ptr + 0x20;
  readData(&unk_2512b7c, base, current);
  current = ptr + 0x24;
  readData(&unk_dce541c, base, current);
  ptr += 0x28;
}
