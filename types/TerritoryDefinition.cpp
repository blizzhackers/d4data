/**
 * Definition: TerritoryDefinition
 * Hash: a0ecd25d
 */

#include "TerritoryDefinition.h"

void TerritoryDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&color, base, ptr);
}
