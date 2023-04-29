/**
 * Definition: OctreeCube
 * Hash: 93896f01
 */

#include "OctreeCube.h"

void OctreeCube::read(const char* base, char* &ptr) {
  readData(&wpOrigin, base, ptr);
  readData(&wdSize, base, ptr);
}
