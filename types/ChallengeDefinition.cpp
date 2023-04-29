/**
 * Definition: ChallengeDefinition
 * Hash: 3ef83c2c
 */

#include "ChallengeDefinition.h"

void ChallengeDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwNextID, base, ptr);
  readData(&arCategories, base, ptr);
}
