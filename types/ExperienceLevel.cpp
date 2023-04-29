/**
 * Definition: ExperienceLevel
 * Hash: ceb15e0
 */

#include "ExperienceLevel.h"

void ExperienceLevel::read(const char* base, char* &ptr) {
  readData(&nDeltaXP, base, ptr);
  readData(&unk_66201eb, base, ptr);
  readData(&flLifeStealMultiplier, base, ptr);
}
