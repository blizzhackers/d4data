/**
 * Definition: tfd376ef4
 * Hash: fd376ef4
 */

#include "tfd376ef4.h"

void tfd376ef4::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&nWidth, base, current);
  current = ptr + 0x4;
  readData(&nHeight, base, current);
  current = ptr + 0x8;
  readData(&nMaxHeight, base, current);
  current = ptr + 0xa;
  readData(&nMinHeight, base, current);
  current = ptr + 0xc;
  readData(&unk_784cc0a, base, current);
  current = ptr + 0x10;
  readData(&unk_96d4a3a, base, current);
  current = ptr + 0x20;
  readData(&unk_92a8c46, base, current);
  current = ptr + 0x30;
  readData(&unk_66ea301, base, current);
  current = ptr + 0x3c;
  readData(&unk_573867e, base, current);
  current = ptr + 0x48;
  readData(&unk_50ad237, base, current);
  current = ptr + 0x54;
  readData(&unk_b7e82ff, base, current);
  current = ptr + 0x60;
  readData(&unk_aae2d5e, base, current);
  current = ptr + 0x70;
  readData(&unk_dfff8d2, base, current);
  current = ptr + 0x80;
  readData(&arClutter, base, current);
  current = ptr + 0x90;
  readData(&unk_3ebf245, base, current);
  current = ptr + 0x98;
  readData(&unk_4fbebbf, base, current);
  current = ptr + 0xa0;
  readData(&unk_286419f, base, current);
  current = ptr + 0xa8;
  readData(&unk_eb5aed9, base, current);
  current = ptr + 0xb0;
  readData(&unk_7c5feb2, base, current);
  current = ptr + 0xb8;
  readData(&unk_4963bda, base, current);
  current = ptr + 0xc0;
  readData(&unk_a7e5485, base, current);
  current = ptr + 0xd0;
  readData(&arFogMask, base, current);
  current = ptr + 0xe0;
  readData(&unk_da24a45, base, current);
  current = ptr + 0xf0;
  readData(&unk_131b0a2, base, current);
  ptr += 0x100;
}
