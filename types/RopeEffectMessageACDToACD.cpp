/**
 * Definition: RopeEffectMessageACDToACD
 * Hash: 9afa2f1b
 */

#include "RopeEffectMessageACDToACD.h"

void RopeEffectMessageACDToACD::read(const char* base, char* &ptr) {
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
  readData(&annTo, base, current);
  current = ptr + 0x28;
  readData(&unk_b883005, base, current);
  current = ptr + 0x30;
  readData(&ePositionTo, base, current);
  current = ptr + 0x34;
  readData(&bIgnoreOwnerAlpha, base, current);
  ptr += 0x38;
}
