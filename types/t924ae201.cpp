/**
 * Definition: t924ae201
 * Hash: 924ae201
 */

#include "t924ae201.h"

void t924ae201::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&sName, base, current);
  current = ptr + 0x4;
  readData(&arComponents, base, current);
  current = ptr + 0x14;
  readData(&tColorSet, base, current);
  ptr += 0x2c;
}
