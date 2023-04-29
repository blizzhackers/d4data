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
  readData(&unk_5395833, base, ptr);
  readData(&snoHairStyle, base, ptr);
  readData(&unk_ba89bb4, base, ptr);
  readData(&unk_cd15187, base, ptr);
  readData(&unk_7be0932, base, ptr);
  readData(&unk_3657ed3, base, ptr);
  readData(&unk_7d2386a, base, ptr);
  readData(&unk_6b4b5b8, base, ptr);
  readData(&snoJewelry, base, ptr);
  readData(&arrItems, base, ptr);
  readData(&unk_87a6362, base, ptr);
  readData(&unk_aff169e, base, ptr);
  readData(&unk_b1142bf, base, ptr);
  readData(&unk_d675dd5, base, ptr);
}
