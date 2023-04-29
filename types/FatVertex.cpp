/**
 * Definition: FatVertex
 * Hash: 105be619
 */

#include "FatVertex.h"

void FatVertex::read(const char* base, char* &ptr) {
  readData(&wpPos, base, ptr);
  readData(&wvNormal, base, ptr);
  readData(&rgbaColor, base, ptr);
  readData(&vUVSet, base, ptr);
  readData(&vecTangent, base, ptr);
}
