/**
 * Definition: t5a26a83e
 * Hash: 5a26a83e
 */

#include "t5a26a83e.h"

void t5a26a83e::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&snoClass, base, current);
  current = ptr + 0x14;
  readData(&snoFacialHair, base, current);
  current = ptr + 0x18;
  readData(&snoHairStyle, base, current);
  current = ptr + 0x1c;
  readData(&snoJewelry, base, current);
  current = ptr + 0x20;
  readData(&bFemale, base, current);
  ptr += 0x24;
}
