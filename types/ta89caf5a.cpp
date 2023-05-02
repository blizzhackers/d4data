/**
 * Definition: ta89caf5a
 * Hash: a89caf5a
 */

#include "ta89caf5a.h"

void ta89caf5a::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&dwNodeIndex, base, current);
  ptr += 0x14;
}
