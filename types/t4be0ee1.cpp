/**
 * Definition: t4be0ee1
 * Hash: 4be0ee1
 */

#include "t4be0ee1.h"

void t4be0ee1::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&annTarget, base, current);
  current = ptr + 0x18;
  readData(&annAttacker, base, current);
  current = ptr + 0x20;
  readData(&unk_5692531, base, current);
  current = ptr + 0x30;
  readData(&unk_5d619c6, base, current);
  current = ptr + 0x40;
  readData(&unk_2b88f71, base, current);
  current = ptr + 0x48;
  readData(&unk_b1ae0e8, base, current);
  current = ptr + 0x50;
  readData(&snoEffectGroup, base, current);
  ptr += 0x54;
}
