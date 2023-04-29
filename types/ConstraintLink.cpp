/**
 * Definition: ConstraintLink
 * Hash: b1fa7373
 */

#include "ConstraintLink.h"

void ConstraintLink::read(const char* base, char* &ptr) {
  readData(&dwHash, base, ptr);
}
