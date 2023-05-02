/**
 * Definition: ChallengeDefinition
 * Hash: 3ef83c2c
 */

#include "ChallengeDefinition.h"

void ChallengeDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwNextID, base, current);
  current = ptr + 0x10;
  readData(&arCategories, base, current);
  ptr += 0x20;
}
