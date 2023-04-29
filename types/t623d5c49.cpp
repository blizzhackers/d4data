/**
 * Definition: t623d5c49
 * Hash: 623d5c49
 */

#include "t623d5c49.h"

void t623d5c49::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tConditions, base, ptr);
  readData(&fGenerated, base, ptr);
  readData(&unk_6cba752, base, ptr);
  readData(&unk_e560b0b, base, ptr);
  readData(&dwTriggerFlags, base, ptr);
  readData(&unk_a936bd9, base, ptr);
  readData(&rgbaColorAdd, base, ptr);
  readData(&nHitFlashAddDuration, base, ptr);
  readData(&rgbaColorMul, base, ptr);
  readData(&nHitFlashMulDuration, base, ptr);
  readData(&unk_d6526ac, base, ptr);
  readData(&unk_622a853, base, ptr);
  readData(&unk_faa2c92, base, ptr);
  readData(&unk_135c4d0, base, ptr);
  readData(&unk_6ba75, base, ptr);
  readData(&unk_53a2e7d, base, ptr);
  readData(&dwID, base, ptr);
  readData(&unk_b765a7, base, ptr);
  readData(&unk_17f7deb, base, ptr);
}
