/**
 * Definition: t64372b14
 * Hash: 64372b14
 */

#include "t64372b14.h"

void t64372b14::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
  readData(&unk_7f4b6d5, base, ptr);
  readData(&unk_a639294, base, ptr);
  readData(&unk_b31efb6, base, ptr);
}
