/**
 * Definition: t21fe5fc0
 * Hash: 21fe5fc0
 */

#include "t21fe5fc0.h"

void t21fe5fc0::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tConditions, base, ptr);
  readData(&fGenerated, base, ptr);
  readData(&unk_6cba752, base, ptr);
  readData(&unk_e560b0b, base, ptr);
  readData(&unk_2b94198, base, ptr);
  readData(&dwActorID, base, ptr);
  readData(&dwID, base, ptr);
}
