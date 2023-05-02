/**
 * Definition: t666e5231
 * Hash: 666e5231
 */

#include "t666e5231.h"

void t666e5231::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&flTime, base, current);
  current = ptr + 0x4;
  readData(&flValue, base, current);
  ptr += 0x8;
}
