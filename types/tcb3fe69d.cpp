/**
 * Definition: tcb3fe69d
 * Hash: cb3fe69d
 */

#include "tcb3fe69d.h"

void tcb3fe69d::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&fAlphaBlendEnable, base, current);
  current = ptr + 0x4;
  readData(&eBlendOp, base, current);
  current = ptr + 0x8;
  readData(&eSrcBlendFactor, base, current);
  current = ptr + 0xc;
  readData(&eDestBlendFactor, base, current);
  current = ptr + 0x10;
  readData(&unk_102510d, base, current);
  current = ptr + 0x14;
  readData(&unk_d04248f, base, current);
  current = ptr + 0x18;
  readData(&unk_d05eb97, base, current);
  current = ptr + 0x1c;
  readData(&unk_4011abf, base, current);
  current = ptr + 0x20;
  readData(&unk_9920e8a, base, current);
  current = ptr + 0x24;
  readData(&unk_f1d0b5f, base, current);
  current = ptr + 0x28;
  readData(&unk_a5c387a, base, current);
  current = ptr + 0x2c;
  readData(&unk_968db19, base, current);
  ptr += 0x30;
}
