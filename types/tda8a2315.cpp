/**
 * Definition: tda8a2315
 * Hash: da8a2315
 */

#include "tda8a2315.h"

void tda8a2315::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_6c68319, base, current);
  current = ptr + 0x4;
  readData(&unk_d64b2c9, base, current);
  current = ptr + 0x8;
  readData(&snoSummonPower, base, current);
  current = ptr + 0xc;
  readData(&tMarkerHandle, base, current);
  current = ptr + 0x14;
  readData(&eVisibility, base, current);
  current = ptr + 0x18;
  readData(&unk_209d19e, base, current);
  ptr += 0x1c;
}
