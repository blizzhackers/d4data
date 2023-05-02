/**
 * Definition: ConstraintLink
 * Hash: b1fa7373
 */

#include "ConstraintLink.h"

void ConstraintLink::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwHash, base, current);
  ptr += 0x4;
}
