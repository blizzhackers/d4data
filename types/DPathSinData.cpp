/**
 * Definition: DPathSinData
 * Hash: eabcf935
 */

#include "DPathSinData.h"

void DPathSinData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&flSinIncPerTick, base, current);
  current = ptr + 0x4;
  readData(&flSinIncAccel, base, current);
  current = ptr + 0x8;
  readData(&flLateralMaxDistance, base, current);
  current = ptr + 0xc;
  readData(&flOOLateralDistanceToScale, base, current);
  current = ptr + 0x10;
  readData(&flLateralStartDistance, base, current);
  current = ptr + 0x14;
  readData(&flSpeed, base, current);
  current = ptr + 0x18;
  readData(&annOwner, base, current);
  ptr += 0x20;
}
