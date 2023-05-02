/**
 * Definition: t1af4235c
 * Hash: 1af4235c
 */

#include "t1af4235c.h"

void t1af4235c::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x18;
  readData(&unk_c0222bf, base, current);
  current = ptr + 0x1c;
  readData(&dwPad, base, current);
  current = ptr + 0x20;
  readData(&flValue, base, current);
  current = ptr + 0x24;
  readData(&unk_adc7465, base, current);
  current = ptr + 0x28;
  readData(&unk_c7b2b18, base, current);
  ptr += 0x30;
}
