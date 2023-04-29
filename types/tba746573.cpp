/**
 * Definition: tba746573
 * Hash: ba746573
 */

#include "tba746573.h"

void tba746573::read(const char* base, char* &ptr) {
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
  readData(&unk_7902ee3, base, ptr);
  readData(&unk_25955c7, base, ptr);
  readData(&unk_abee5c3, base, ptr);
  readData(&unk_fbca868, base, ptr);
  readData(&unk_839aa20, base, ptr);
  readData(&unk_f75b7db, base, ptr);
  readData(&unk_e7f8ef9, base, ptr);
  readData(&unk_600cf5, base, ptr);
  readData(&unk_aa07da, base, ptr);
  readData(&unk_abbeed2, base, ptr);
  readData(&unk_b9bf10d, base, ptr);
  readData(&unk_991ae81, base, ptr);
}
