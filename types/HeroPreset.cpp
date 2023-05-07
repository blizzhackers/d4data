/**
 * Definition: HeroPreset
 * Hash: 70c77f41
 */

#include "HeroPreset.h"

void HeroPreset::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&szName, base, current);
  current = ptr + 0x20;
  readData(&snoWorld, base, current);
  current = ptr + 0x24;
  readData(&unk_d6d0056, base, current);
  current = ptr + 0x28;
  readData(&eGender, base, current);
  current = ptr + 0x2c;
  readData(&eClass, base, current);
  current = ptr + 0x30;
  readData(&snoFace, base, current);
  current = ptr + 0x34;
  readData(&snoHairColor, base, current);
  current = ptr + 0x38;
  readData(&snoHairStyle, base, current);
  current = ptr + 0x3c;
  readData(&snoFacialHair, base, current);
  current = ptr + 0x40;
  readData(&unk_cd15187, base, current);
  current = ptr + 0x50;
  readData(&snoEyeColor, base, current);
  current = ptr + 0x54;
  readData(&snoMakeup, base, current);
  current = ptr + 0x58;
  readData(&snoMarkingShape, base, current);
  current = ptr + 0x5c;
  readData(&snoMarkingColor, base, current);
  current = ptr + 0x60;
  readData(&snoJewelry, base, current);
  current = ptr + 0x64;
  readData(&arrItems, base, current);
  current = ptr + 0x8c;
  readData(&unk_87a6362, base, current);
  current = ptr + 0xa8;
  readData(&unk_aff169e, base, current);
  current = ptr + 0xb0;
  readData(&unk_b1142bf, base, current);
  current = ptr + 0xc0;
  readData(&unk_d675dd5, base, current);
  ptr += 0xc8;
}
