/**
 * Definition: ReputationDefinition
 * Hash: 8b9a57f4
 */

#include "ReputationDefinition.h"

void ReputationDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwFlags, base, current);
  current = ptr + 0xc;
  readData(&dwMaxValue, base, current);
  ptr += 0x10;
}
