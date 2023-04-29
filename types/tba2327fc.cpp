/**
 * Definition: tba2327fc
 * Hash: ba2327fc
 */

#include "tba2327fc.h"

void tba2327fc::read(const char* base, char* &ptr) {
  readData(&snoWorld, base, ptr);
  readData(&arQuests, base, ptr);
}
