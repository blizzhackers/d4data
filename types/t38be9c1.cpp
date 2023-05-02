/**
 * Definition: t38be9c1
 * Hash: 38be9c1
 */

#include "t38be9c1.h"

void t38be9c1::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&flTime, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&tValue, base, current);
  current = ptr + 0x1c;
  readData(&unk_6ca113c, base, current);
  ptr += 0x20;
}
