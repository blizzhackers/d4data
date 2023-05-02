/**
 * Definition: t8593c428
 * Hash: 8593c428
 */

#include "t8593c428.h"

void t8593c428::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_c9522b4, base, current);
  current = ptr + 0x20;
  readData(&unk_6e07592, base, current);
  current = ptr + 0x30;
  readData(&unk_91c65f5, base, current);
  current = ptr + 0x40;
  readData(&unk_7d0510b, base, current);
  current = ptr + 0x50;
  readData(&unk_b0f69e7, base, current);
  ptr += 0x60;
}
