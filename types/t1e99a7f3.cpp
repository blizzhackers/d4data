/**
 * Definition: t1e99a7f3
 * Hash: 1e99a7f3
 */

#include "t1e99a7f3.h"

void t1e99a7f3::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoClass, base, ptr);
  readData(&snoHead, base, ptr);
  readData(&snoTorso, base, ptr);
  readData(&snoFeet, base, ptr);
  readData(&snoHands, base, ptr);
  readData(&snoLegs, base, ptr);
  readData(&nArmorSet, base, ptr);
  readData(&bFemale, base, ptr);
}
