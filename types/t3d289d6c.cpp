/**
 * Definition: t3d289d6c
 * Hash: 3d289d6c
 */

#include "t3d289d6c.h"

void t3d289d6c::read(const char* base, char* &ptr) {
  readData(&nRequiredLevel, base, ptr);
  readData(&nGoldCost, base, ptr);
  readData(&arRecipes, base, ptr);
}
