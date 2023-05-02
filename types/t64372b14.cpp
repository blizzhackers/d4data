/**
 * Definition: t64372b14
 * Hash: 64372b14
 */

#include "t64372b14.h"

void t64372b14::read(const char* base, char* &ptr) {
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
  readData(&unk_7f4b6d5, base, current);
  current = ptr + 0x34;
  readData(&unk_a639294, base, current);
  current = ptr + 0x38;
  readData(&unk_b31efb6, base, current);
  ptr += 0x40;
}
