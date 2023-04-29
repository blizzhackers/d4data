/**
 * Definition: t3f958891
 * Hash: 3f958891
 */

#include "t3f958891.h"

void t3f958891::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tConditions, base, ptr);
  readData(&fGenerated, base, ptr);
  readData(&unk_6cba752, base, ptr);
  readData(&unk_e560b0b, base, ptr);
  readData(&dwActorID, base, ptr);
  readData(&unk_6c0cb90, base, ptr);
  readData(&unk_279aa5a, base, ptr);
}
