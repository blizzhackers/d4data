/**
 * Definition: WeaponExpertiseRanks
 * Hash: 47f33ce2
 */

#include "WeaponExpertiseRanks.h"

void WeaponExpertiseRanks::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x108;
  readData(&arRanks, base, current);
  ptr += 0x118;
}
