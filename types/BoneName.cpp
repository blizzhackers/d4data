/**
 * Definition: BoneName
 * Hash: 5160ca65
 */

#include "BoneName.h"

void BoneName::read(const char* base, char* &ptr) {
  readData(&szName, base, ptr);
}
