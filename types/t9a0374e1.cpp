/**
 * Definition: t9a0374e1
 * Hash: 9a0374e1
 */

#include "t9a0374e1.h"

void t9a0374e1::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
  readData(&unk_880879b, base, ptr);
}
