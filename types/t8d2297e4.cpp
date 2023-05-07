/**
 * Definition: t8d2297e4
 * Hash: 8d2297e4
 */

#include "t8d2297e4.h"

void t8d2297e4::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_4ec0ab2, base, current);
  current = ptr + 0x20;
  readData(&unk_ffbac0, base, current);
  current = ptr + 0x30;
  readData(&unk_ea1a6c6, base, current);
  current = ptr + 0x40;
  readData(&unk_29196f5, base, current);
  current = ptr + 0x50;
  readData(&unk_ce00a34, base, current);
  current = ptr + 0x60;
  readData(&unk_4f6f7ab, base, current);
  current = ptr + 0x70;
  readData(&unk_299b139, base, current);
  current = ptr + 0x80;
  readData(&arJewelryChoices, base, current);
  current = ptr + 0x90;
  readData(&unk_71d6df3, base, current);
  current = ptr + 0xa0;
  readData(&unk_c3897b4, base, current);
  current = ptr + 0xb0;
  readData(&unk_730d00f, base, current);
  current = ptr + 0xb4;
  readData(&unk_4792ef5, base, current);
  current = ptr + 0xb8;
  readData(&unk_354b223, base, current);
  current = ptr + 0xbc;
  readData(&unk_1dde522, base, current);
  current = ptr + 0xc0;
  readData(&unk_44109a8, base, current);
  current = ptr + 0xc4;
  readData(&nLastAllocatedRewardId, base, current);
  ptr += 0xc8;
}
