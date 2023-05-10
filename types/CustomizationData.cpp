/**
 * Definition: CustomizationData
 * Hash: e5dc90d3
 */

#include "CustomizationData.h"

void CustomizationData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoFace, base, current);
  current = ptr + 0x4;
  readData(&snoHairColor, base, current);
  current = ptr + 0x8;
  readData(&snoHairStyle, base, current);
  current = ptr + 0xc;
  readData(&snoFacialHair, base, current);
  current = ptr + 0x10;
  readData(&snoJewelry, base, current);
  current = ptr + 0x14;
  readData(&snoEyeColor, base, current);
  current = ptr + 0x18;
  readData(&unk_9363e7a, base, current);
  current = ptr + 0x1c;
  readData(&snoMakeup, base, current);
  current = ptr + 0x20;
  readData(&snoMarkingShape, base, current);
  current = ptr + 0x24;
  readData(&snoMarkingColor, base, current);
  ptr += 0x28;
}
