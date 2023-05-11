/**
 * Definition: t19e1543d
 * Hash: 19e1543d
 */

#include "t19e1543d.h"

void t19e1543d::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_8205294, base, current);
  current = ptr + 0x100;
  readData(&arCrafters, base, current);
  current = ptr + 0x190;
  readData(&unk_f37b35d, base, current);
  current = ptr + 0x1e0;
  readData(&unk_13e0ecf, base, current);
  current = ptr + 0x1e4;
  readData(&unk_c834d7a, base, current);
  current = ptr + 0x1e8;
  readData(&unk_24fcd3d, base, current);
  current = ptr + 0x1ec;
  readData(&unk_6ac8078, base, current);
  current = ptr + 0x1f0;
  readData(&unk_2a2b3f7, base, current);
  ptr += 0x1f8;
}
