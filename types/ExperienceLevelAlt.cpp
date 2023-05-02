/**
 * Definition: ExperienceLevelAlt
 * Hash: 750aecc1
 */

#include "ExperienceLevelAlt.h"

void ExperienceLevelAlt::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&nDeltaXP, base, current);
  ptr += 0x8;
}
