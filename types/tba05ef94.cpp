/**
 * Definition: tba05ef94
 * Hash: ba05ef94
 */

#include "tba05ef94.h"

void tba05ef94::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&eType, base, ptr);
  readData(&snoPower, base, ptr);
  readData(&szPowerMod, base, ptr);
  readData(&dwMaxTalentRanks, base, ptr);
}
