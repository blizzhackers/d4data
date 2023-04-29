/**
 * Definition: tdc960527
 * Hash: dc960527
 */

#include "tdc960527.h"

void tdc960527::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
}
