/**
 * Definition: td0cd44cc
 * Hash: d0cd44cc
 */

#include "td0cd44cc.h"

void td0cd44cc::read(const char* base, char* &ptr) {
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
  readData(&unk_db59a90, base, ptr);
  readData(&unk_54c8b32, base, ptr);
  readData(&unk_295ed9d, base, ptr);
}
