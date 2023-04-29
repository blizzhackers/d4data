/**
 * Definition: t377335cc
 * Hash: 377335cc
 */

#include "t377335cc.h"

void t377335cc::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tConditions, base, ptr);
  readData(&fGenerated, base, ptr);
  readData(&unk_6cba752, base, ptr);
  readData(&unk_e560b0b, base, ptr);
  readData(&tHardpointLink, base, ptr);
  readData(&unk_50647a1, base, ptr);
  readData(&unk_b887a97, base, ptr);
  readData(&dwID, base, ptr);
  readData(&tCleanup, base, ptr);
}
