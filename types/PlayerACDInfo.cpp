/**
 * Definition: PlayerACDInfo
 * Hash: 3cb27fa1
 */

#include "PlayerACDInfo.h"

void PlayerACDInfo::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&fFemale, base, current);
  current = ptr + 0x4;
  readData(&ePlayerClass, base, current);
  current = ptr + 0x8;
  readData(&unk_9363e7a, base, current);
  current = ptr + 0xc;
  readData(&snoFace, base, current);
  current = ptr + 0x10;
  readData(&snoMakeup, base, current);
  current = ptr + 0x14;
  readData(&snoMarkingShape, base, current);
  current = ptr + 0x18;
  readData(&snoMarkingColor, base, current);
  current = ptr + 0x1c;
  readData(&snoHairColor, base, current);
  current = ptr + 0x20;
  readData(&snoEyeColor, base, current);
  current = ptr + 0x24;
  readData(&snoHairStyle, base, current);
  current = ptr + 0x28;
  readData(&snoFacialHair, base, current);
  current = ptr + 0x2c;
  readData(&snoJewelry, base, current);
  current = ptr + 0x30;
  readData(&snoMount, base, current);
  current = ptr + 0x34;
  readData(&snoHeadstone, base, current);
  current = ptr + 0x38;
  readData(&snoItems, base, current);
  current = ptr + 0x84;
  readData(&snoPowers, base, current);
  current = ptr + 0x288;
  readData(&unk_dedd90a, base, current);
  current = ptr + 0x2ec;
  readData(&unk_d96f751, base, current);
  ptr += 0x370;
}
