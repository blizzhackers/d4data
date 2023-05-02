/**
 * Definition: FlagLookup
 * Hash: 7662dad4
 */

#include "FlagLookup.h"

void FlagLookup::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&nIndex, base, current);
  current = ptr + 0x4;
  readData(&szLabel, base, current);
  current = ptr + 0x84;
  readData(&szDescription, base, current);
  ptr += 0x184;
}
