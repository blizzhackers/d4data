/**
 * Definition: td60b0d5f
 * Hash: d60b0d5f
 */

#include "td60b0d5f.h"

void td60b0d5f::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
  readData(&unk_d6337ba, base, ptr);
  readData(&dwPadding, base, ptr);
  readData(&tProcChance, base, ptr);
  readData(&unk_b52872c, base, ptr);
}
