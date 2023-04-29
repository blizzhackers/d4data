/**
 * Definition: t35a12884
 * Hash: 35a12884
 */

#include "t35a12884.h"

void t35a12884::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
}
