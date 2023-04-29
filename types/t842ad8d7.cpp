/**
 * Definition: t842ad8d7
 * Hash: 842ad8d7
 */

#include "t842ad8d7.h"

void t842ad8d7::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&tConditions, base, ptr);
  readData(&fGenerated, base, ptr);
  readData(&unk_6cba752, base, ptr);
  readData(&unk_e560b0b, base, ptr);
  readData(&tDuration, base, ptr);
  readData(&dwTriggerFlags, base, ptr);
  readData(&unk_a936bd9, base, ptr);
  readData(&tCleanup, base, ptr);
  readData(&unk_49e9257, base, ptr);
  readData(&unk_5490979, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&dwActorID, base, ptr);
  readData(&snoAppearance, base, ptr);
  readData(&tLookLink, base, ptr);
  readData(&unk_279aa5a, base, ptr);
}
