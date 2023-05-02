/**
 * Definition: OctreePrimitive
 * Hash: 7ad69b7b
 */

#include "OctreePrimitive.h"

void OctreePrimitive::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&uUserData, base, current);
  ptr += 0x8;
}
