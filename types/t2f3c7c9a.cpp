/**
 * Definition: t2f3c7c9a
 * Hash: 2f3c7c9a
 */

#include "t2f3c7c9a.h"

void t2f3c7c9a::read(const char* base, char* &ptr) {
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
  readData(&snoSkillPower, base, current);
  current = ptr + 0x24;
  readData(&unk_cb51d8e, base, current);
  current = ptr + 0x28;
  readData(&unk_5099eca, base, current);
  ptr += 0x30;
}
