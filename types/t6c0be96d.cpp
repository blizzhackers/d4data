/**
 * Definition: t6c0be96d
 * Hash: 6c0be96d
 */

#include "t6c0be96d.h"

void t6c0be96d::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&snoScroll, base, current);
  current = ptr + 0x14;
  readData(&nNodeUID, base, current);
  ptr += 0x18;
}
