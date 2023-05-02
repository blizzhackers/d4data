/**
 * Definition: tcabcc4f9
 * Hash: cabcc4f9
 */

#include "tcabcc4f9.h"

void tcabcc4f9::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&flTime, base, current);
  current = ptr + 0x4;
  readData(&flScale, base, current);
  ptr += 0x8;
}
