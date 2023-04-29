/**
 * Definition: ParagonBoardDefinition
 * Hash: b412b2d9
 */

#include "ParagonBoardDefinition.h"

void ParagonBoardDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&nWidth, base, ptr);
  readData(&arEntries, base, ptr);
}
