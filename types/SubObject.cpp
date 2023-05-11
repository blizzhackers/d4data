/**
 * Definition: SubObject
 * Hash: f5aaf621
 */

#include "SubObject.h"

void SubObject::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwFlags, base, current);
  current = ptr + 0x4;
  readData(&unk_334eb2d, base, current);
  current = ptr + 0x8;
  readData(&ptClothData, base, current);
  current = ptr + 0x18;
  readData(&unk_26f39c1, base, current);
  current = ptr + 0x28;
  readData(&unk_e32b9c5, base, current);
  current = ptr + 0x2c;
  readData(&unk_87b4c64, base, current);
  current = ptr + 0x30;
  readData(&unk_d28c748, base, current);
  current = ptr + 0x34;
  readData(&dwAbSize, base, current);
  current = ptr + 0x38;
  readData(&tNameInfo, base, current);
  current = ptr + 0x60;
  readData(&nMaterialIndex, base, current);
  current = ptr + 0x64;
  readData(&dwSubObjectHash, base, current);
  current = ptr + 0x68;
  readData(&unk_79283f, base, current);
  current = ptr + 0x6c;
  readData(&unk_45c6981, base, current);
  current = ptr + 0x70;
  readData(&unk_9b916d8, base, current);
  current = ptr + 0x74;
  readData(&unk_a758781, base, current);
  current = ptr + 0x78;
  readData(&unk_a1b71f5, base, current);
  current = ptr + 0x7c;
  readData(&unk_95f2e14, base, current);
  current = ptr + 0x80;
  readData(&unk_6c0cb90, base, current);
  current = ptr + 0x84;
  readData(&unk_e354a1f, base, current);
  current = ptr + 0x88;
  readData(&aabbBounds, base, current);
  current = ptr + 0xa0;
  readData(&ptShapes, base, current);
  current = ptr + 0xb0;
  readData(&unk_eba16f, base, current);
  current = ptr + 0xc0;
  readData(&ptPostprocessed, base, current);
  current = ptr + 0xc8;
  readData(&ptSegments, base, current);
  current = ptr + 0xd8;
  readData(&wpFixedPointPosOffset, base, current);
  current = ptr + 0xe4;
  readData(&wpFixedPointPosScale, base, current);
  ptr += 0xf0;
}
