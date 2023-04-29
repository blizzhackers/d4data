/**
 * Definition: t3cb27fa1
 * Hash: 3cb27fa1
 */

#include "t3cb27fa1.h"

void t3cb27fa1::read(const char* base, char* &ptr) {
  readData(&fFemale, base, ptr);
  readData(&ePlayerClass, base, ptr);
  readData(&snoFace, base, ptr);
  readData(&snoMakeup, base, ptr);
  readData(&snoMarkingShape, base, ptr);
  readData(&snoMarkingColor, base, ptr);
  readData(&snoHairColor, base, ptr);
  readData(&snoEyeColor, base, ptr);
  readData(&snoHairStyle, base, ptr);
  readData(&snoFacialHair, base, ptr);
  readData(&snoJewelry, base, ptr);
  readData(&snoMount, base, ptr);
  readData(&snoItems, base, ptr);
  readData(&snoPowers, base, ptr);
  readData(&unk_dedd90a, base, ptr);
  readData(&unk_d96f751, base, ptr);
}
