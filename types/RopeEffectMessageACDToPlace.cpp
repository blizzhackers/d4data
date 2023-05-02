/**
 * Definition: RopeEffectMessageACDToPlace
 * Hash: 4368d578
 */

#include "RopeEffectMessageACDToPlace.h"

void RopeEffectMessageACDToPlace::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&snoRope, base, current);
  current = ptr + 0x14;
  readData(&annFrom, base, current);
  current = ptr + 0x1c;
  readData(&ePositionFrom, base, current);
  current = ptr + 0x20;
  readData(&tPlaceTo, base, current);
  current = ptr + 0x34;
  readData(&bIgnoreOwnerAlpha, base, current);
  ptr += 0x38;
}
