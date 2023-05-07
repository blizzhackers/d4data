/**
 * Definition: t7fdfdce8
 * Hash: 7fdfdce8
 */

#include "t7fdfdce8.h"

void t7fdfdce8::read(const char* base, char* &ptr) {
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
  readData(&unk_7b01c79, base, current);
  current = ptr + 0x7c;
  readData(&unk_30b49c2, base, current);
  current = ptr + 0x80;
  readData(&unk_8781d26, base, current);
  current = ptr + 0x84;
  readData(&unk_9a31592, base, current);
  current = ptr + 0x88;
  readData(&unk_dc3a5eb, base, current);
  current = ptr + 0x8c;
  readData(&unk_9de2797, base, current);
  current = ptr + 0x90;
  readData(&unk_a91f1a5, base, current);
  current = ptr + 0x94;
  readData(&unk_9fca8d1, base, current);
  current = ptr + 0x98;
  readData(&unk_71c05df, base, current);
  current = ptr + 0x9c;
  readData(&unk_325b1ab, base, current);
  current = ptr + 0xa0;
  readData(&unk_b98f05c, base, current);
  current = ptr + 0xa4;
  readData(&unk_72c9d37, base, current);
  current = ptr + 0xa8;
  readData(&unk_ed13c17, base, current);
  current = ptr + 0xb0;
  readData(&unk_264c534, base, current);
  current = ptr + 0xb4;
  readData(&unk_e4f41ba, base, current);
  current = ptr + 0xc0;
  readData(&unk_8ff6495, base, current);
  current = ptr + 0xc4;
  readData(&unk_983a265, base, current);
  current = ptr + 0xc8;
  readData(&unk_70c2d23, base, current);
  current = ptr + 0xcc;
  readData(&unk_215cc14, base, current);
  current = ptr + 0xd0;
  readData(&unk_802b7b, base, current);
  current = ptr + 0xd4;
  readData(&unk_e27112b, base, current);
  current = ptr + 0xd8;
  readData(&eOrientationMode, base, current);
  current = ptr + 0xdc;
  readData(&unk_daebe18, base, current);
  current = ptr + 0xe0;
  readData(&unk_6101673, base, current);
  current = ptr + 0xe4;
  readData(&unk_8470ffc, base, current);
  current = ptr + 0xec;
  readData(&unk_46c8459, base, current);
  current = ptr + 0xf0;
  readData(&vecTargetOffset, base, current);
  current = ptr + 0xfc;
  readData(&unk_70ccb7e, base, current);
  current = ptr + 0x100;
  readData(&unk_f294e79, base, current);
  current = ptr + 0x10c;
  readData(&unk_991ae81, base, current);
  ptr += 0x110;
}
