/**
 * Definition: t9e2445da
 * Hash: 9e2445da
 */

#include "t9e2445da.h"

void t9e2445da::read(const char* base, char* &ptr) {
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
  readData(&unk_279aa5a, base, current);
  current = ptr + 0x7c;
  readData(&dwActorID, base, current);
  current = ptr + 0x80;
  readData(&unk_a8ee95c, base, current);
  current = ptr + 0x84;
  readData(&unk_4bec6d2, base, current);
  current = ptr + 0x88;
  readData(&bHideSheathed, base, current);
  ptr += 0x90;
}
