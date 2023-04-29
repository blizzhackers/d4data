/**
 * Definition: te31b8ea2
 * Hash: e31b8ea2
 */

#include "te31b8ea2.h"

void te31b8ea2::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tConditions, base, ptr);
  readData(&fGenerated, base, ptr);
  readData(&unk_6cba752, base, ptr);
  readData(&unk_e560b0b, base, ptr);
  readData(&unk_733c15d, base, ptr);
  readData(&dwActorID, base, ptr);
  readData(&unk_279aa5a, base, ptr);
}
