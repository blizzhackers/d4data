/**
 * Definition: ParagonGlyphExperience
 * Hash: 1068f794
 */

#include "ParagonGlyphExperience.h"

void ParagonGlyphExperience::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&nDeltaXP, base, current);
  ptr += 0x4;
}
