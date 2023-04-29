/**
 * Definition: td305aa32
 * Hash: d305aa32
 */

#include "td305aa32.h"

void td305aa32::read(const char* base, char* &ptr) {
  readData(&tFace, base, ptr);
  readData(&tMakeup, base, ptr);
  readData(&tJewelry, base, ptr);
  readData(&tHairStyle, base, ptr);
  readData(&tFacialHair, base, ptr);
}
