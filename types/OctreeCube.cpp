/**
 * Definition: OctreeCube
 * Hash: 93896f01
 */

#include "OctreeCube.h"

void OctreeCube::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&wpOrigin, base, current);
  current = ptr + 0xc;
  readData(&wdSize, base, current);
  ptr += 0x10;
}
