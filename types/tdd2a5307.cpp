/**
 * Definition: tdd2a5307
 * Hash: dd2a5307
 */

#include "tdd2a5307.h"

void tdd2a5307::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tBoneName, base, current);
  current = ptr + 0x4;
  readData(&aPitchMin, base, current);
  current = ptr + 0x8;
  readData(&aPitchMax, base, current);
  ptr += 0xc;
}
