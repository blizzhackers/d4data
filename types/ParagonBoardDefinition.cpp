/**
 * Definition: ParagonBoardDefinition
 * Hash: b412b2d9
 */

#include "ParagonBoardDefinition.h"

void ParagonBoardDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&nWidth, base, current);
  current = ptr + 0x10;
  readData(&arEntries, base, current);
  ptr += 0x20;
}
