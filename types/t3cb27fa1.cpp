/**
 * Definition: t3cb27fa1
 * Hash: 3cb27fa1
 */

#include "t3cb27fa1.h"

void t3cb27fa1::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&fFemale, base, current);
  current = ptr + 0x4;
  readData(&ePlayerClass, base, current);
  current = ptr + 0x8;
  readData(&snoFace, base, current);
  current = ptr + 0xc;
  readData(&snoMakeup, base, current);
  current = ptr + 0x10;
  readData(&snoMarkingShape, base, current);
  current = ptr + 0x14;
  readData(&snoMarkingColor, base, current);
  current = ptr + 0x18;
  readData(&snoHairColor, base, current);
  current = ptr + 0x1c;
  readData(&snoEyeColor, base, current);
  current = ptr + 0x20;
  readData(&snoHairStyle, base, current);
  current = ptr + 0x24;
  readData(&snoFacialHair, base, current);
  current = ptr + 0x28;
  readData(&snoJewelry, base, current);
  current = ptr + 0x2c;
  readData(&snoMount, base, current);
  current = ptr + 0x30;
  readData(&snoItems, base, current);
  current = ptr + 0x7c;
  readData(&snoPowers, base, current);
  current = ptr + 0x280;
  readData(&unk_dedd90a, base, current);
  current = ptr + 0x2e4;
  readData(&unk_d96f751, base, current);
  ptr += 0x368;
}
