/**
 * Definition: t897512c1
 * Hash: 897512c1
 */

#include "t897512c1.h"

void t897512c1::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
  readData(&unk_d6337ba, base, ptr);
  readData(&dwPadding, base, ptr);
  readData(&tProcChance, base, ptr);
}
