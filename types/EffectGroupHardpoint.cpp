/**
 * Definition: EffectGroupHardpoint
 * Hash: 38bb2e83
 */

#include "EffectGroupHardpoint.h"

void EffectGroupHardpoint::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tInfo, base, current);
  current = ptr + 0x8;
  readData(&transform, base, current);
  ptr += 0x24;
}
