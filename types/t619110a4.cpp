/**
 * Definition: t619110a4
 * Hash: 619110a4
 */

#include "t619110a4.h"

void t619110a4::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&nIsFemale, base, current);
  current = ptr + 0x4;
  readData(&snoFace, base, current);
  current = ptr + 0x8;
  readData(&snoMakeup, base, current);
  current = ptr + 0xc;
  readData(&snoMarkingShape, base, current);
  current = ptr + 0x10;
  readData(&snoMarkingColor, base, current);
  current = ptr + 0x14;
  readData(&snoEyeColor, base, current);
  current = ptr + 0x18;
  readData(&unk_1989dcd, base, current);
  current = ptr + 0x1c;
  readData(&snoHairColor, base, current);
  current = ptr + 0x20;
  readData(&snoHairStyle, base, current);
  current = ptr + 0x24;
  readData(&snoFacialHair, base, current);
  current = ptr + 0x28;
  readData(&snoJewelry, base, current);
  current = ptr + 0x2c;
  readData(&unk_23f8995, base, current);
  current = ptr + 0x30;
  readData(&unk_35e41c8, base, current);
  ptr += 0x34;
}
