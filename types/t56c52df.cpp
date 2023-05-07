/**
 * Definition: t56c52df
 * Hash: 56c52df
 */

#include "t56c52df.h"

void t56c52df::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_7a9ffba, base, current);
  current = ptr + 0x18;
  readData(&annAttacker, base, current);
  current = ptr + 0x20;
  readData(&unk_5692531, base, current);
  current = ptr + 0x30;
  readData(&unk_5d619c6, base, current);
  current = ptr + 0x40;
  readData(&flImpactDirection, base, current);
  current = ptr + 0x48;
  readData(&flImpactPitch, base, current);
  ptr += 0x50;
}
