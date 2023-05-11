/**
 * Definition: HeroDetailsArray
 * Hash: aec481b3
 */

#include "HeroDetailsArray.h"

void HeroDetailsArray::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&arEntries, base, current);
  ptr += 0x10;
}
