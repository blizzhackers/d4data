/**
 * Definition: CraftingMatCategory
 * Hash: 6a7c9e6e
 */

#include "CraftingMatCategory.h"

void CraftingMatCategory::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  ptr += 0x104;
}
