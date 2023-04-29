/**
 * Definition: tac84a430
 * Hash: ac84a430
 */

#include "tac84a430.h"

void tac84a430::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tConditions, base, ptr);
  readData(&fGenerated, base, ptr);
  readData(&unk_6cba752, base, ptr);
  readData(&unk_e560b0b, base, ptr);
  readData(&unk_279aa5a, base, ptr);
  readData(&dwActorID, base, ptr);
  readData(&unk_d5acde2, base, ptr);
}
