/**
 * Definition: TriggerEventHitFlash
 * Hash: 623d5c49
 */

#include "TriggerEventHitFlash.h"

void TriggerEventHitFlash::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&tConditions, base, current);
  current = ptr + 0x3c;
  readData(&fGenerated, base, current);
  current = ptr + 0x40;
  readData(&unk_6cba752, base, current);
  current = ptr + 0x44;
  readData(&unk_e560b0b, base, current);
  current = ptr + 0x48;
  readData(&dwTriggerFlags, base, current);
  current = ptr + 0x4c;
  readData(&unk_a936bd9, base, current);
  current = ptr + 0x50;
  readData(&rgbaColorAdd, base, current);
  current = ptr + 0x54;
  readData(&nHitFlashAddDuration, base, current);
  current = ptr + 0x58;
  readData(&rgbaColorMul, base, current);
  current = ptr + 0x5c;
  readData(&nHitFlashMulDuration, base, current);
  current = ptr + 0x60;
  readData(&unk_d6526ac, base, current);
  current = ptr + 0x64;
  readData(&unk_622a853, base, current);
  current = ptr + 0x68;
  readData(&unk_faa2c92, base, current);
  current = ptr + 0x6c;
  readData(&unk_135c4d0, base, current);
  current = ptr + 0x70;
  readData(&unk_6ba75, base, current);
  current = ptr + 0x74;
  readData(&unk_53a2e7d, base, current);
  current = ptr + 0x78;
  readData(&dwID, base, current);
  current = ptr + 0x7c;
  readData(&unk_b765a7, base, current);
  current = ptr + 0x80;
  readData(&unk_17f7deb, base, current);
  ptr += 0x88;
}
