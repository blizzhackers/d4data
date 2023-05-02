/**
 * Definition: PowerBuffDefinition
 * Hash: 3fd70b39
 */

#include "PowerBuffDefinition.h"

void PowerBuffDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwID, base, current);
  current = ptr + 0x4;
  readData(&unk_47cbc6b, base, current);
  current = ptr + 0x8;
  readData(&bHarmful, base, current);
  current = ptr + 0xc;
  readData(&bInfinite, base, current);
  current = ptr + 0x10;
  readData(&tDuration, base, current);
  current = ptr + 0x30;
  readData(&tMaxStackCount, base, current);
  current = ptr + 0x50;
  readData(&unk_89134c5, base, current);
  current = ptr + 0x54;
  readData(&unk_6431ae9, base, current);
  current = ptr + 0x58;
  readData(&bCancellable, base, current);
  current = ptr + 0x5c;
  readData(&unk_99b5752, base, current);
  current = ptr + 0x60;
  readData(&unk_93cd85f, base, current);
  current = ptr + 0x64;
  readData(&unk_5c11505, base, current);
  current = ptr + 0x68;
  readData(&unk_9eb6fb0, base, current);
  current = ptr + 0x6c;
  readData(&unk_e8f1e19, base, current);
  current = ptr + 0x70;
  readData(&unk_9cb4832, base, current);
  current = ptr + 0x74;
  readData(&unk_71ba554, base, current);
  current = ptr + 0x78;
  readData(&hIcon, base, current);
  current = ptr + 0x7c;
  readData(&unk_8008c5, base, current);
  current = ptr + 0x80;
  readData(&unk_78b0ca1, base, current);
  current = ptr + 0x84;
  readData(&unk_c35001, base, current);
  current = ptr + 0x88;
  readData(&unk_395ccd6, base, current);
  current = ptr + 0x8c;
  readData(&unk_200bd12, base, current);
  current = ptr + 0x90;
  readData(&tDOT, base, current);
  current = ptr + 0x128;
  readData(&unk_dcb22bd, base, current);
  current = ptr + 0x130;
  readData(&tCrowdControl, base, current);
  current = ptr + 0x198;
  readData(&unk_e4aa036, base, current);
  current = ptr + 0x1a0;
  readData(&unk_1e4754c, base, current);
  ptr += 0x1e8;
}
