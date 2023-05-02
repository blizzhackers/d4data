/**
 * Definition: t4808f804
 * Hash: 4808f804
 */

#include "t4808f804.h"

void t4808f804::read(const char* base, char* &ptr) {
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
  readData(&szCameraMarker, base, current);
  current = ptr + 0x7c;
  readData(&unk_8f65c3f, base, current);
  current = ptr + 0x80;
  readData(&unk_5b85276, base, current);
  current = ptr + 0x84;
  readData(&unk_daebe18, base, current);
  current = ptr + 0x88;
  readData(&unk_6101673, base, current);
  current = ptr + 0x8c;
  readData(&unk_8470ffc, base, current);
  current = ptr + 0x94;
  readData(&unk_46c8459, base, current);
  current = ptr + 0x98;
  readData(&vecTargetOffset, base, current);
  current = ptr + 0xa4;
  readData(&unk_70ccb7e, base, current);
  current = ptr + 0xa8;
  readData(&unk_f294e79, base, current);
  current = ptr + 0xb4;
  readData(&unk_991ae81, base, current);
  ptr += 0xb8;
}
