/**
 * Definition: tf3ac1b8f
 * Hash: f3ac1b8f
 */

#include "tf3ac1b8f.h"

void tf3ac1b8f::read(const char* base, char* &ptr) {
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
  readData(&unk_ee01c09, base, ptr);
  readData(&dwActorID, base, ptr);
  readData(&unk_acdb8a3, base, ptr);
  readData(&unk_e8a81a5, base, ptr);
}
