/**
 * Definition: HirelingInfo
 * Hash: 7fb7c55e
 */

#include "HirelingInfo.h"

void HirelingInfo::read(const char* base, char* &ptr) {
  readData(&eClass, base, ptr);
  readData(&gbidName, base, ptr);
  readData(&fDead, base, ptr);
  readData(&arnPowerKeyParam, base, ptr);
}
