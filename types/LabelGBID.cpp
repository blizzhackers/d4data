/**
 * Definition: LabelGBID
 * Hash: 8511e6b6
 */

#include "LabelGBID.h"

void LabelGBID::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x104;
  readData(&nIndex, base, current);
  ptr += 0x108;
}
