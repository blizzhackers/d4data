/**
 * Definition: CollSettingsParam
 * Hash: 400e4fac
 */

#include "CollSettingsParam.h"

void CollSettingsParam::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&nFrameStart, base, current);
  current = ptr + 0x4;
  readData(&nFrameEnd, base, current);
  ptr += 0x8;
}
