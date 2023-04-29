/**
 * Definition: VectorPath
 * Hash: 9aa74280
 */

#include "VectorPath.h"

void VectorPath::read(const char* base, char* &ptr) {
  readData(&tPathData, base, ptr);
}
