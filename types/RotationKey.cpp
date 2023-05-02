/**
 * Definition: RotationKey
 * Hash: a4034979
 */

#include "RotationKey.h"

void RotationKey::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&nFrame, base, current);
  current = ptr + 0x4;
  readData(&q16, base, current);
  ptr += 0xc;
}
