/**
 * Definition: FlagLookup
 * Hash: 7662dad4
 */

#include "FlagLookup.h"

void FlagLookup::read(const char* base, char* &ptr) {
  readData(&nIndex, base, ptr);
  readData(&szLabel, base, ptr);
  readData(&szDescription, base, ptr);
}
