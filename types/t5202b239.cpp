/**
 * Definition: t5202b239
 * Hash: 5202b239
 */

#include "t5202b239.h"

void t5202b239::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
}
