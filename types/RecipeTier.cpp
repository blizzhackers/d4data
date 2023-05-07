/**
 * Definition: RecipeTier
 * Hash: 3d289d6c
 */

#include "RecipeTier.h"

void RecipeTier::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&nRequiredLevel, base, current);
  current = ptr + 0x4;
  readData(&nGoldCost, base, current);
  current = ptr + 0x8;
  readData(&arRecipes, base, current);
  ptr += 0x18;
}
