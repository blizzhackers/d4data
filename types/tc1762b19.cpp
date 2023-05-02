/**
 * Definition: tc1762b19
 * Hash: c1762b19
 */

#include "tc1762b19.h"

void tc1762b19::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_941b8c4, base, current);
  current = ptr + 0x4;
  readData(&unk_9f5a7e6, base, current);
  current = ptr + 0x8;
  readData(&unk_60998e0, base, current);
  current = ptr + 0xc;
  readData(&unk_92fec32, base, current);
  current = ptr + 0x10;
  readData(&tMargins, base, current);
  current = ptr + 0x20;
  readData(&unk_8cf4c5d, base, current);
  current = ptr + 0x24;
  readData(&unk_3445dcd, base, current);
  ptr += 0x28;
}
