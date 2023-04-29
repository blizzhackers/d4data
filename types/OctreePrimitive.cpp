/**
 * Definition: OctreePrimitive
 * Hash: 7ad69b7b
 */

#include "OctreePrimitive.h"

void OctreePrimitive::read(const char* base, char* &ptr) {
  readData(&uUserData, base, ptr);
}
