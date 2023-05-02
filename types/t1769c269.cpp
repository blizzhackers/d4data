/**
 * Definition: t1769c269
 * Hash: 1769c269
 */

#include "t1769c269.h"

void t1769c269::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&arLabels, base, current);
  current = ptr + 0x20;
  readData(&arBannerShapes, base, current);
  current = ptr + 0x30;
  readData(&unk_dcd9083, base, current);
  current = ptr + 0x40;
  readData(&unk_c1b3e76, base, current);
  current = ptr + 0x50;
  readData(&unk_5055c2d, base, current);
  current = ptr + 0x60;
  readData(&unk_aed7782, base, current);
  current = ptr + 0x70;
  readData(&arIcons, base, current);
  current = ptr + 0x80;
  readData(&arColors, base, current);
  current = ptr + 0x90;
  readData(&unk_fcfa894, base, current);
  current = ptr + 0xa0;
  readData(&unk_28158ed, base, current);
  current = ptr + 0xb0;
  readData(&unk_a8d4641, base, current);
  current = ptr + 0xc0;
  readData(&unk_38a6145, base, current);
  current = ptr + 0xd0;
  readData(&unk_109949c, base, current);
  current = ptr + 0xe0;
  readData(&tIconScale, base, current);
  ptr += 0xf0;
}
