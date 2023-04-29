/**
 * Definition: DPathSinData
 * Hash: eabcf935
 */

#include "DPathSinData.h"

void DPathSinData::read(const char* base, char* &ptr) {
  readData(&flSinIncPerTick, base, ptr);
  readData(&flSinIncAccel, base, ptr);
  readData(&flLateralMaxDistance, base, ptr);
  readData(&flOOLateralDistanceToScale, base, ptr);
  readData(&flLateralStartDistance, base, ptr);
  readData(&flSpeed, base, ptr);
  readData(&annOwner, base, ptr);
}
