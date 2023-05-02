/**
 * Definition: ta0b28844
 * Hash: a0b28844
 */

#include "ta0b28844.h"

void ta0b28844::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&arUpdates, base, current);
  ptr += 0x214;
}
