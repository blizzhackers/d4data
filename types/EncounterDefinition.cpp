/**
 * Definition: EncounterDefinition
 * Hash: 9252a01c
 */

#include "EncounterDefinition.h"

void EncounterDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&snoSymbol, base, ptr);
}
