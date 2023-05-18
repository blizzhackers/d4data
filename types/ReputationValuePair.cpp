/**
 * Definition: ReputationValuePair
 * Hash: ab2d8e94
 */

#include "ReputationValuePair.h"

void ReputationValuePair::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoReputation, base, current);
  current = ptr + 0x4;
  readData(&nValue, base, current);
  ptr += 0x8;
}
