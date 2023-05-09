/**
 * Definition: GlobalIntensityLevels
 * Hash: 93bb0983
 */

#include "GlobalIntensityLevels.h"

void GlobalIntensityLevels::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&arParams, base, current);
  ptr += 0x20;
}
