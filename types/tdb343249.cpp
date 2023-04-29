/**
 * Definition: tdb343249
 * Hash: db343249
 */

#include "tdb343249.h"

void tdb343249::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&unk_c0222bf, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&snoSkillPower, base, ptr);
  readData(&nSkillRank, base, ptr);
}
