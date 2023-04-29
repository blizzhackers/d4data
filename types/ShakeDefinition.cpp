/**
 * Definition: ShakeDefinition
 * Hash: ed97ed75
 */

#include "ShakeDefinition.h"

void ShakeDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwShakeFlags, base, ptr);
  readData(&tSystemDuration, base, ptr);
  readData(&tOutroDuration, base, ptr);
  readData(&wdMinRange, base, ptr);
  readData(&wdMaxRange, base, ptr);
  readData(&pathCameraPositionAmplitude, base, ptr);
  readData(&pathCameraPositionFrequency, base, ptr);
}
