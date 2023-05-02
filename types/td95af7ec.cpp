/**
 * Definition: td95af7ec
 * Hash: d95af7ec
 */

#include "td95af7ec.h"

void td95af7ec::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&eVBFormat, base, current);
  current = ptr + 0x4;
  readData(&unk_e91fb07, base, current);
  current = ptr + 0x8;
  readData(&unk_62bfa18, base, current);
  current = ptr + 0x18;
  readData(&unk_aea647a, base, current);
  current = ptr + 0x28;
  readData(&wEid, base, current);
  current = ptr + 0x30;
  readData(&unk_35f022, base, current);
  current = ptr + 0x40;
  readData(&wAid, base, current);
  current = ptr + 0x44;
  readData(&baid, base, current);
  current = ptr + 0x48;
  readData(&unk_4c43adc, base, current);
  ptr += 0x50;
}
