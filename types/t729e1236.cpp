/**
 * Definition: t729e1236
 * Hash: 729e1236
 */

#include "t729e1236.h"

void t729e1236::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&fStencilBufferEnable, base, current);
  current = ptr + 0x4;
  readData(&dwStencilBufferRefValue, base, current);
  current = ptr + 0x8;
  readData(&unk_125c5d5, base, current);
  current = ptr + 0xc;
  readData(&unk_a6ffe64, base, current);
  current = ptr + 0x10;
  readData(&unk_ab3262d, base, current);
  current = ptr + 0x14;
  readData(&unk_35ab896, base, current);
  current = ptr + 0x18;
  readData(&unk_3553b7b, base, current);
  current = ptr + 0x1c;
  readData(&unk_f57a4b5, base, current);
  current = ptr + 0x20;
  readData(&unk_d5bbf15, base, current);
  current = ptr + 0x24;
  readData(&unk_4c8527e, base, current);
  current = ptr + 0x28;
  readData(&unk_4c2d563, base, current);
  current = ptr + 0x2c;
  readData(&unk_e787b9d, base, current);
  ptr += 0x30;
}
