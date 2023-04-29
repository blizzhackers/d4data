/**
 * Definition: t924ae201
 * Hash: 924ae201
 */

#include "t924ae201.h"

void t924ae201::read(const char* base, char* &ptr) {
  readData(&sName, base, ptr);
  readData(&arComponents, base, ptr);
  readData(&tColorSet, base, ptr);
}
