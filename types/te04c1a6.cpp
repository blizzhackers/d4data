/**
 * Definition: te04c1a6
 * Hash: e04c1a6
 */

#include "te04c1a6.h"

void te04c1a6::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&flTime, base, current);
  current = ptr + 0x4;
  readData(&vPosition, base, current);
  ptr += 0x10;
}
