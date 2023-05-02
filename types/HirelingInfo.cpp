/**
 * Definition: HirelingInfo
 * Hash: 7fb7c55e
 */

#include "HirelingInfo.h"

void HirelingInfo::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&eClass, base, current);
  current = ptr + 0x4;
  readData(&gbidName, base, current);
  current = ptr + 0x8;
  readData(&fDead, base, current);
  current = ptr + 0xc;
  readData(&arnPowerKeyParam, base, current);
  ptr += 0x20;
}
