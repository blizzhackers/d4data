/**
 * Definition: t619110a4
 * Hash: 619110a4
 */

#include "t619110a4.h"

void t619110a4::read(const char* base, char* &ptr) {
  readData(&nIsFemale, base, ptr);
  readData(&snoFace, base, ptr);
  readData(&snoMakeup, base, ptr);
  readData(&snoMarkingShape, base, ptr);
  readData(&snoMarkingColor, base, ptr);
  readData(&snoEyeColor, base, ptr);
  readData(&unk_1989dcd, base, ptr);
  readData(&snoHairColor, base, ptr);
  readData(&snoHairStyle, base, ptr);
  readData(&snoFacialHair, base, ptr);
  readData(&snoJewelry, base, ptr);
  readData(&unk_23f8995, base, ptr);
  readData(&unk_35e41c8, base, ptr);
}
