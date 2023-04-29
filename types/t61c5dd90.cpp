/**
 * Definition: t61c5dd90
 * Hash: 61c5dd90
 */

#include "t61c5dd90.h"

void t61c5dd90::read(const char* base, char* &ptr) {
  readData(&gbHeroDescription, base, ptr);
  readData(&IsLinearMessage, base, ptr);
  readData(&unk_af8195d, base, ptr);
  readData(&tTriangle, base, ptr);
}
