/**
 * Definition: EncounterDefinition
 * Hash: 9252a01c
 */

#include "EncounterDefinition.h"

void EncounterDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&snoSymbol, base, current);
  ptr += 0xc;
}
