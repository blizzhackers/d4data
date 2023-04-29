/**
 * Definition: tb150855c
 * Hash: b150855c
 */

#include "tb150855c.h"

void tb150855c::read(const char* base, char* &ptr) {
  readData(&snoActor, base, ptr);
  readData(&unk_74ee52d, base, ptr);
  readData(&arPhases, base, ptr);
}
