/**
 * Definition: tc39a5b71
 * Hash: c39a5b71
 */

#include "tc39a5b71.h"

void tc39a5b71::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tConditions, base, ptr);
  readData(&fGenerated, base, ptr);
  readData(&unk_6cba752, base, ptr);
  readData(&unk_e560b0b, base, ptr);
}
