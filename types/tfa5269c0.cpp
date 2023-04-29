/**
 * Definition: tfa5269c0
 * Hash: fa5269c0
 */

#include "tfa5269c0.h"

void tfa5269c0::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
}
