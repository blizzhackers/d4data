/**
 * Definition: ReputationDefinition
 * Hash: 8b9a57f4
 */

#include "ReputationDefinition.h"

void ReputationDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwFlags, base, ptr);
  readData(&dwMaxValue, base, ptr);
}
