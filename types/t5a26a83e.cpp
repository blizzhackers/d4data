/**
 * Definition: t5a26a83e
 * Hash: 5a26a83e
 */

#include "t5a26a83e.h"

void t5a26a83e::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoClass, base, ptr);
  readData(&snoFacialHair, base, ptr);
  readData(&snoHairStyle, base, ptr);
  readData(&snoJewelry, base, ptr);
  readData(&bFemale, base, ptr);
}
