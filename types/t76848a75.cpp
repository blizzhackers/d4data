/**
 * Definition: t76848a75
 * Hash: 76848a75
 */

#include "t76848a75.h"

void t76848a75::read(const char* base, char* &ptr) {
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
  readData(&dwID, base, ptr);
  readData(&snoRope, base, ptr);
  readData(&unk_760871b, base, ptr);
  readData(&unk_f0a4c41, base, ptr);
  readData(&unk_825667e, base, ptr);
  readData(&vecScalar, base, ptr);
}
