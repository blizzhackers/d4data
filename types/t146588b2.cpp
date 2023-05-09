/**
 * Definition: t146588b2
 * Hash: 146588b2
 */

#include "t146588b2.h"

void t146588b2::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szRegionName, base, current);
  current = ptr + 0x10;
  readData(&eZone, base, current);
  current = ptr + 0x18;
  readData(&szToolTip, base, current);
  current = ptr + 0x28;
  readData(&unk_d460343, base, current);
  ptr += 0x38;
}
