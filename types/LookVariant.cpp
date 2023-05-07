/**
 * Definition: LookVariant
 * Hash: 6032ac6a
 */

#include "LookVariant.h"

void LookVariant::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szName, base, current);
  current = ptr + 0x4;
  readData(&dwValue, base, current);
  ptr += 0x8;
}
