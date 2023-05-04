/**
 * Definition: WeaponExpertiseRank
 * Hash: 2135ea8f
 */

#include "WeaponExpertiseRank.h"

void WeaponExpertiseRank::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_5ec4d3d, base, current);
  ptr += 0x4;
}
