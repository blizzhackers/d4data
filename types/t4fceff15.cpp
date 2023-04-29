/**
 * Definition: t4fceff15
 * Hash: 4fceff15
 */

#include "t4fceff15.h"

void t4fceff15::read(const char* base, char* &ptr) {
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
  readData(&snoObserver, base, ptr);
  readData(&unk_74b7ed1, base, ptr);
  readData(&eTargetType, base, ptr);
  readData(&unk_96c6da9, base, ptr);
  readData(&unk_a1d7e72, base, ptr);
  readData(&unk_bd1644f, base, ptr);
  readData(&unk_22446a6, base, ptr);
  readData(&unk_991ae81, base, ptr);
  readData(&unk_30c3aff, base, ptr);
}
