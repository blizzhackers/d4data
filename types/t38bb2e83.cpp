/**
 * Definition: t38bb2e83
 * Hash: 38bb2e83
 */

#include "t38bb2e83.h"

void t38bb2e83::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tInfo, base, current);
  current = ptr + 0x8;
  readData(&transform, base, current);
  ptr += 0x24;
}
