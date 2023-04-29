/**
 * Definition: tb3de293b
 * Hash: b3de293b
 */

#include "tb3de293b.h"

void tb3de293b::read(const char* base, char* &ptr) {
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
  readData(&dwObjectID, base, ptr);
  readData(&unk_1635dc2, base, ptr);
  readData(&unk_5b85276, base, ptr);
  readData(&unk_daebe18, base, ptr);
  readData(&unk_6101673, base, ptr);
  readData(&unk_8470ffc, base, ptr);
  readData(&unk_46c8459, base, ptr);
  readData(&unk_991ae81, base, ptr);
  readData(&unk_ff8fce8, base, ptr);
  readData(&unk_3c71266, base, ptr);
  readData(&unk_c751343, base, ptr);
  readData(&unk_23237e1, base, ptr);
  readData(&unk_f1b6afc, base, ptr);
}
