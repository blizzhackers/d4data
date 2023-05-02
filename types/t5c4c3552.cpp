/**
 * Definition: t5c4c3552
 * Hash: 5c4c3552
 */

#include "t5c4c3552.h"

void t5c4c3552::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_247a8fe, base, current);
  current = ptr + 0x18;
  readData(&arConditions, base, current);
  current = ptr + 0x30;
  readData(&unk_d6337ba, base, current);
  current = ptr + 0x34;
  readData(&dwPadding, base, current);
  current = ptr + 0x38;
  readData(&tProcChance, base, current);
  current = ptr + 0x58;
  readData(&unk_b52872c, base, current);
  current = ptr + 0x5c;
  readData(&unk_ac0bfbc, base, current);
  current = ptr + 0x60;
  readData(&unk_99e97f7, base, current);
  ptr += 0x68;
}
