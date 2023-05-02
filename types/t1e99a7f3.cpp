/**
 * Definition: t1e99a7f3
 * Hash: 1e99a7f3
 */

#include "t1e99a7f3.h"

void t1e99a7f3::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&snoClass, base, current);
  current = ptr + 0x14;
  readData(&snoHead, base, current);
  current = ptr + 0x18;
  readData(&snoTorso, base, current);
  current = ptr + 0x1c;
  readData(&snoFeet, base, current);
  current = ptr + 0x20;
  readData(&snoHands, base, current);
  current = ptr + 0x24;
  readData(&snoLegs, base, current);
  current = ptr + 0x28;
  readData(&nArmorSet, base, current);
  current = ptr + 0x2c;
  readData(&bFemale, base, current);
  ptr += 0x30;
}
