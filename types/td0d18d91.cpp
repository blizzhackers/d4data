/**
 * Definition: td0d18d91
 * Hash: d0d18d91
 */

#include "td0d18d91.h"

void td0d18d91::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&uHeroId, base, ptr);
  readData(&szHeroName, base, ptr);
  readData(&snoClass, base, ptr);
  readData(&nLevel, base, ptr);
}
