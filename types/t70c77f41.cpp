/**
 * Definition: t70c77f41
 * Hash: 70c77f41
 */

#include "t70c77f41.h"

void t70c77f41::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&szName, base, ptr);
  readData(&snoWorld, base, ptr);
  readData(&unk_d6d0056, base, ptr);
  readData(&eGender, base, ptr);
  readData(&eClass, base, ptr);
  readData(&snoFace, base, ptr);
  readData(&snoHairColor, base, ptr);
  readData(&snoHairStyle, base, ptr);
  readData(&snoFacialHair, base, ptr);
  readData(&unk_cd15187, base, ptr);
  readData(&snoEyeColor, base, ptr);
  readData(&snoMakeup, base, ptr);
  readData(&snoMarkingShape, base, ptr);
  readData(&snoMarkingColor, base, ptr);
  readData(&snoJewelry, base, ptr);
  readData(&arrItems, base, ptr);
  readData(&unk_87a6362, base, ptr);
  readData(&unk_aff169e, base, ptr);
  readData(&unk_b1142bf, base, ptr);
  readData(&unk_d675dd5, base, ptr);
}
