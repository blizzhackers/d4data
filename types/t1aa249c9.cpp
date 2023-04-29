/**
 * Definition: t1aa249c9
 * Hash: 1aa249c9
 */

#include "t1aa249c9.h"

void t1aa249c9::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&wpLocation, base, ptr);
  readData(&dwEnd, base, ptr);
  readData(&snoLevelArea, base, ptr);
}
