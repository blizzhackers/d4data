/**
 * Definition: t81807f39
 * Hash: 81807f39
 */

#include "t81807f39.h"

void t81807f39::read(const char* base, char* &ptr) {
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
  readData(&unk_7903775, base, ptr);
  readData(&unk_2c69731, base, ptr);
  readData(&unk_3c38a23, base, ptr);
  readData(&unk_991ae81, base, ptr);
}
