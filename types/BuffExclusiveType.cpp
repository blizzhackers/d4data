/**
 * Definition: BuffExclusiveType
 * Hash: c42da49d
 */

#include "BuffExclusiveType.h"

void BuffExclusiveType::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  ptr += 0x104;
}
