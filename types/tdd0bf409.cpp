/**
 * Definition: tdd0bf409
 * Hash: dd0bf409
 */

#include "tdd0bf409.h"

void tdd0bf409::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&arSurfaces, base, current);
  ptr += 0x10;
}
