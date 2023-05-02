/**
 * Definition: t71838e4c
 * Hash: 71838e4c
 */

#include "t71838e4c.h"

void t71838e4c::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&eBase, base, current);
  current = ptr + 0x4;
  readData(&flHue, base, current);
  current = ptr + 0x8;
  readData(&flSaturation, base, current);
  current = ptr + 0xc;
  readData(&flValue, base, current);
  current = ptr + 0x10;
  readData(&unk_186de87, base, current);
  current = ptr + 0x14;
  readData(&unk_509016f, base, current);
  current = ptr + 0x18;
  readData(&szLabel, base, current);
  ptr += 0x28;
}
