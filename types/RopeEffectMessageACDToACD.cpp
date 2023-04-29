/**
 * Definition: RopeEffectMessageACDToACD
 * Hash: 9afa2f1b
 */

#include "RopeEffectMessageACDToACD.h"

void RopeEffectMessageACDToACD::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoRope, base, ptr);
  readData(&annFrom, base, ptr);
  readData(&ePositionFrom, base, ptr);
  readData(&annTo, base, ptr);
  readData(&unk_b883005, base, ptr);
  readData(&ePositionTo, base, ptr);
  readData(&bIgnoreOwnerAlpha, base, ptr);
}
