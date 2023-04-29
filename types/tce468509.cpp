/**
 * Definition: tce468509
 * Hash: ce468509
 */

#include "tce468509.h"

void tce468509::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tConditions, base, ptr);
  readData(&fGenerated, base, ptr);
  readData(&unk_6cba752, base, ptr);
  readData(&unk_e560b0b, base, ptr);
  readData(&idEffectGroup, base, ptr);
}
