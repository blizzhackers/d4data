/**
 * Definition: t9dfe7035
 * Hash: 9dfe7035
 */

#include "t9dfe7035.h"

void t9dfe7035::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_1e3c3c3, base, current);
  current = ptr + 0x14;
  readData(&unk_19dfce6, base, current);
  current = ptr + 0x18;
  readData(&unk_18f0908, base, current);
  current = ptr + 0x1c;
  readData(&unk_ec8f2d4, base, current);
  current = ptr + 0x20;
  readData(&unk_b0425e7, base, current);
  ptr += 0x30;
}
