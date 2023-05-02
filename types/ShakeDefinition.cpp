/**
 * Definition: ShakeDefinition
 * Hash: ed97ed75
 */

#include "ShakeDefinition.h"

void ShakeDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwShakeFlags, base, current);
  current = ptr + 0xc;
  readData(&tSystemDuration, base, current);
  current = ptr + 0x10;
  readData(&tOutroDuration, base, current);
  current = ptr + 0x14;
  readData(&wdMinRange, base, current);
  current = ptr + 0x18;
  readData(&wdMaxRange, base, current);
  current = ptr + 0x20;
  readData(&pathCameraPositionAmplitude, base, current);
  current = ptr + 0x58;
  readData(&pathCameraPositionFrequency, base, current);
  ptr += 0x90;
}
