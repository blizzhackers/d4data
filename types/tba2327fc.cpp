/**
 * Definition: tba2327fc
 * Hash: ba2327fc
 */

#include "tba2327fc.h"

void tba2327fc::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoWorld, base, current);
  current = ptr + 0x8;
  readData(&arQuests, base, current);
  ptr += 0x18;
}
