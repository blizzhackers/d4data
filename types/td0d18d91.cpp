/**
 * Definition: td0d18d91
 * Hash: d0d18d91
 */

#include "td0d18d91.h"

void td0d18d91::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&uHeroId, base, current);
  current = ptr + 0x14;
  readData(&szHeroName, base, current);
  current = ptr + 0x20;
  readData(&snoClass, base, current);
  current = ptr + 0x24;
  readData(&nLevel, base, current);
  ptr += 0x28;
}
