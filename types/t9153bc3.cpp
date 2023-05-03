/**
 * Definition: t9153bc3
 * Hash: 9153bc3
 */

#include "t9153bc3.h"

void t9153bc3::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_c1195cb, base, current);
  current = ptr + 0x4;
  readData(&unk_c1194cd, base, current);
  current = ptr + 0x8;
  readData(&bVertical, base, current);
  current = ptr + 0xc;
  readData(&unk_e69457b, base, current);
  current = ptr + 0x10;
  readData(&unk_2eb0960, base, current);
  current = ptr + 0x14;
  readData(&unk_9df1c6f, base, current);
  current = ptr + 0x18;
  readData(&unk_e184982, base, current);
  current = ptr + 0x1c;
  readData(&flThickness, base, current);
  ptr += 0x20;
}
