/**
 * Definition: t447d2ee
 * Hash: 447d2ee
 */

#include "t447d2ee.h"

void t447d2ee::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
}
