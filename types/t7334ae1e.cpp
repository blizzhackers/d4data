/**
 * Definition: t7334ae1e
 * Hash: 7334ae1e
 */

#include "t7334ae1e.h"

void t7334ae1e::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
  readData(&unk_d6337ba, base, ptr);
  readData(&dwPadding, base, ptr);
  readData(&tProcChance, base, ptr);
}
