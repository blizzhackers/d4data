/**
 * Definition: t78eea585
 * Hash: 78eea585
 */

#include "t78eea585.h"

void t78eea585::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&eType, base, current);
  current = ptr + 0x4;
  readData(&flBase, base, current);
  current = ptr + 0x8;
  readData(&unk_da65803, base, current);
  current = ptr + 0xc;
  readData(&unk_640b8ef, base, current);
  current = ptr + 0x10;
  readData(&unk_171732b, base, current);
  current = ptr + 0x14;
  readData(&unk_8694d05, base, current);
  current = ptr + 0x18;
  readData(&unk_b19aa73, base, current);
  current = ptr + 0x1c;
  readData(&unk_bf2b603, base, current);
  ptr += 0x20;
}
