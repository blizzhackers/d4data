/**
 * Definition: t5c4c3552
 * Hash: 5c4c3552
 */

#include "t5c4c3552.h"

void t5c4c3552::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
  readData(&unk_d6337ba, base, ptr);
  readData(&dwPadding, base, ptr);
  readData(&tProcChance, base, ptr);
  readData(&unk_b52872c, base, ptr);
  readData(&unk_ac0bfbc, base, ptr);
  readData(&unk_99e97f7, base, ptr);
}
