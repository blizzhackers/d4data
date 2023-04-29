/**
 * Definition: RopeEffectMessageACDToPlace
 * Hash: 4368d578
 */

#include "RopeEffectMessageACDToPlace.h"

void RopeEffectMessageACDToPlace::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoRope, base, ptr);
  readData(&annFrom, base, ptr);
  readData(&ePositionFrom, base, ptr);
  readData(&tPlaceTo, base, ptr);
  readData(&bIgnoreOwnerAlpha, base, ptr);
}
