/**
 * Definition: tfa5269c0
 * Hash: fa5269c0
 */

#include "tfa5269c0.h"

void tfa5269c0::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  ptr += 0x10;
}
