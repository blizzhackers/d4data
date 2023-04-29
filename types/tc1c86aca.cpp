/**
 * Definition: tc1c86aca
 * Hash: c1c86aca
 */

#include "tc1c86aca.h"

void tc1c86aca::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tConditions, base, ptr);
  readData(&fGenerated, base, ptr);
  readData(&unk_6cba752, base, ptr);
  readData(&unk_e560b0b, base, ptr);
  readData(&bHide, base, ptr);
}
