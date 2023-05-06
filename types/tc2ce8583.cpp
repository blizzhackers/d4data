/**
 * Definition: tc2ce8583
 * Hash: c2ce8583
 */

#include "tc2ce8583.h"

void tc2ce8583::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_8078288, base, current);
  current = ptr + 0x10;
  readData(&unk_80782b8, base, current);
  current = ptr + 0x20;
  readData(&v, base, current);
  current = ptr + 0x30;
  readData(&vw, base, current);
  current = ptr + 0x40;
  readData(&unk_fe3c31a, base, current);
  current = ptr + 0x80;
  readData(&unk_ba20daa, base, current);
  current = ptr + 0xc0;
  readData(&unk_dd9e335, base, current);
  current = ptr + 0x100;
  readData(&unk_72a7ce6, base, current);
  current = ptr + 0x110;
  readData(&unk_954393e, base, current);
  current = ptr + 0x120;
  readData(&unk_c8b717f, base, current);
  current = ptr + 0x130;
  readData(&unk_8dcbeec, base, current);
  current = ptr + 0x140;
  readData(&unk_36fad31, base, current);
  current = ptr + 0x144;
  readData(&invMass, base, current);
  current = ptr + 0x148;
  readData(&unk_e04dc91, base, current);
  current = ptr + 0x14c;
  readData(&parentIndex, base, current);
  current = ptr + 0x14e;
  readData(&unk_29ff5d4, base, current);
  current = ptr + 0x150;
  readData(&unk_7f4d141, base, current);
  current = ptr + 0x152;
  readData(&unk_f67de53, base, current);
  current = ptr + 0x154;
  readData(&unk_87816fd, base, current);
  current = ptr + 0x158;
  readData(&unk_e7f5729, base, current);
  current = ptr + 0x15a;
  readData(&flags, base, current);
  current = ptr + 0x15c;
  readData(&unk_b6524d, base, current);
  current = ptr + 0x164;
  readData(&padding, base, current);
  current = ptr + 0x170;
  readData(&weights, base, current);
  ptr += 0x180;
}
