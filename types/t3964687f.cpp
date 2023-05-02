/**
 * Definition: t3964687f
 * Hash: 3964687f
 */

#include "t3964687f.h"

void t3964687f::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_65aa6d9, base, current);
  current = ptr + 0x14;
  readData(&unk_b950bb6, base, current);
  current = ptr + 0x18;
  readData(&unk_fb8100e, base, current);
  current = ptr + 0x1c;
  readData(&snoTexture, base, current);
  current = ptr + 0x20;
  readData(&unk_284ec52, base, current);
  current = ptr + 0x30;
  readData(&unk_340c842, base, current);
  current = ptr + 0x34;
  readData(&unk_760c2cf, base, current);
  current = ptr + 0x38;
  readData(&unk_4f5b254, base, current);
  current = ptr + 0x44;
  readData(&unk_56127ed, base, current);
  ptr += 0x48;
}
