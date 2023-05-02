/**
 * Definition: t894bd255
 * Hash: 894bd255
 */

#include "t894bd255.h"

void t894bd255::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_3d7c8a2, base, current);
  current = ptr + 0x4;
  readData(&unk_3cdcdff, base, current);
  current = ptr + 0x8;
  readData(&rgbaColor, base, current);
  current = ptr + 0xc;
  readData(&unk_1626611, base, current);
  current = ptr + 0x10;
  readData(&unk_daf4312, base, current);
  current = ptr + 0x14;
  readData(&unk_74b9406, base, current);
  current = ptr + 0x18;
  readData(&unk_9c8a384, base, current);
  current = ptr + 0x1c;
  readData(&unk_b6065b, base, current);
  current = ptr + 0x20;
  readData(&unk_e41f4ef, base, current);
  ptr += 0x24;
}
