/**
 * Definition: t897512c1
 * Hash: 897512c1
 */

#include "t897512c1.h"

void t897512c1::read(const char* base, char* &ptr) {
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
  ptr += 0x58;
}
