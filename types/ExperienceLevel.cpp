/**
 * Definition: ExperienceLevel
 * Hash: ceb15e0
 */

#include "ExperienceLevel.h"

void ExperienceLevel::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&nDeltaXP, base, current);
  current = ptr + 0x8;
  readData(&unk_66201eb, base, current);
  current = ptr + 0xc;
  readData(&flLifeStealMultiplier, base, current);
  ptr += 0x10;
}
