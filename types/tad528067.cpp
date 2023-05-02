/**
 * Definition: tad528067
 * Hash: ad528067
 */

#include "tad528067.h"

void tad528067::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoItems, base, current);
  ptr += 0xc;
}
