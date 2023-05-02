/**
 * Definition: tf3ac1b8f
 * Hash: f3ac1b8f
 */

#include "tf3ac1b8f.h"

void tf3ac1b8f::read(const char* base, char* &ptr) {
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
  readData(&unk_ee01c09, base, current);
  current = ptr + 0x7c;
  readData(&dwActorID, base, current);
  current = ptr + 0x80;
  readData(&unk_acdb8a3, base, current);
  current = ptr + 0x84;
  readData(&unk_e8a81a5, base, current);
  ptr += 0x88;
}
