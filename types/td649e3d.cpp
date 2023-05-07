/**
 * Definition: td649e3d
 * Hash: d649e3d
 */

#include "td649e3d.h"

void td649e3d::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&dwPortalType, base, current);
  ptr += 0x14;
}
