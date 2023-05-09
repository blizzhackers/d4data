/**
 * Definition: PowerStartVariant
 * Hash: 56c72db0
 */

#include "PowerStartVariant.h"

void PowerStartVariant::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tName, base, current);
  current = ptr + 0x4;
  readData(&unk_73750d7, base, current);
  current = ptr + 0x8;
  readData(&unk_94d85e6, base, current);
  current = ptr + 0xc;
  readData(&bIgnoreRange, base, current);
  current = ptr + 0x10;
  readData(&bForceCast, base, current);
  current = ptr + 0x14;
  readData(&unk_fca3b69, base, current);
  current = ptr + 0x18;
  readData(&unk_c0426f9, base, current);
  ptr += 0x28;
}
