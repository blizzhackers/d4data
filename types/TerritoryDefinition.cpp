/**
 * Definition: TerritoryDefinition
 * Hash: a0ecd25d
 */

#include "TerritoryDefinition.h"

void TerritoryDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&color, base, current);
  ptr += 0xc;
}
