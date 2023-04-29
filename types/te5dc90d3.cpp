/**
 * Definition: te5dc90d3
 * Hash: e5dc90d3
 */

#include "te5dc90d3.h"

void te5dc90d3::read(const char* base, char* &ptr) {
  readData(&snoFace, base, ptr);
  readData(&snoHairColor, base, ptr);
  readData(&snoHairStyle, base, ptr);
  readData(&snoFacialHair, base, ptr);
  readData(&snoJewelry, base, ptr);
  readData(&snoEyeColor, base, ptr);
  readData(&unk_9363e7a, base, ptr);
  readData(&snoMakeup, base, ptr);
  readData(&snoMarkingShape, base, ptr);
  readData(&snoMarkingColor, base, ptr);
}
