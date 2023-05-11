/**
 * Definition: t4038af2f
 * Hash: 4038af2f
 */

#include "t4038af2f.h"

void t4038af2f::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&tConditions, base, current);
  current = ptr + 0x3c;
  readData(&fGenerated, base, current);
  current = ptr + 0x40;
  readData(&unk_6cba752, base, current);
  current = ptr + 0x44;
  readData(&unk_e560b0b, base, current);
  current = ptr + 0x48;
  readData(&tDuration, base, current);
  current = ptr + 0x4c;
  readData(&dwTriggerFlags, base, current);
  current = ptr + 0x50;
  readData(&unk_a936bd9, base, current);
  current = ptr + 0x54;
  readData(&tCleanup, base, current);
  current = ptr + 0x6c;
  readData(&unk_49e9257, base, current);
  current = ptr + 0x70;
  readData(&unk_5490979, base, current);
  current = ptr + 0x74;
  readData(&dwPad, base, current);
  current = ptr + 0x78;
  readData(&rgbaColorAdd, base, current);
  current = ptr + 0x7c;
  readData(&nHitFlashAddDuration, base, current);
  current = ptr + 0x80;
  readData(&rgbaColorMul, base, current);
  current = ptr + 0x84;
  readData(&nHitFlashMulDuration, base, current);
  current = ptr + 0x88;
  readData(&unk_d6526ac, base, current);
  current = ptr + 0x8c;
  readData(&unk_622a853, base, current);
  current = ptr + 0x90;
  readData(&unk_faa2c92, base, current);
  current = ptr + 0x94;
  readData(&unk_135c4d0, base, current);
  current = ptr + 0x98;
  readData(&unk_6ba75, base, current);
  current = ptr + 0x9c;
  readData(&unk_53a2e7d, base, current);
  current = ptr + 0xa0;
  readData(&dwID, base, current);
  current = ptr + 0xa4;
  readData(&unk_b765a7, base, current);
  current = ptr + 0xa8;
  readData(&unk_17f7deb, base, current);
  current = ptr + 0xac;
  readData(&unk_b19da4b, base, current);
  ptr += 0xb0;
}
