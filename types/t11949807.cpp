/**
 * Definition: t11949807
 * Hash: 11949807
 */

#include "t11949807.h"

void t11949807::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&arSections, base, current);
  ptr += 0x10;
}
