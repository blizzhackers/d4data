/**
 * Definition: tdb343249
 * Hash: db343249
 */

#include "tdb343249.h"

void tdb343249::read(const char* base, char* &ptr) {
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
  readData(&nSkillRank, base, current);
  ptr += 0x28;
}
