/**
 * Definition: MountACDInfo
 * Hash: ad528067
 */

#include "MountACDInfo.h"

void MountACDInfo::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoItems, base, current);
  ptr += 0xc;
}
