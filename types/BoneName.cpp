/**
 * Definition: BoneName
 * Hash: 5160ca65
 */

#include "BoneName.h"

void BoneName::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szName, base, current);
  ptr += 0x4;
}
