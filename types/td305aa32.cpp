/**
 * Definition: td305aa32
 * Hash: d305aa32
 */

#include "td305aa32.h"

void td305aa32::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tFace, base, current);
  current = ptr + 0x8;
  readData(&tMakeup, base, current);
  current = ptr + 0x10;
  readData(&tJewelry, base, current);
  current = ptr + 0x18;
  readData(&tHairStyle, base, current);
  current = ptr + 0x20;
  readData(&tFacialHair, base, current);
  ptr += 0x28;
}
