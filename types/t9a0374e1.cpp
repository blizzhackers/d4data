/**
 * Definition: t9a0374e1
 * Hash: 9a0374e1
 */

#include "t9a0374e1.h"

void t9a0374e1::read(const char* base, char* &ptr) {
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
  readData(&unk_880879b, base, current);
  ptr += 0x40;
}
