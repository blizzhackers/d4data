/**
 * Definition: ScaleKey
 * Hash: 483cedd1
 */

#include "ScaleKey.h"

void ScaleKey::read(const char* base, char* &ptr) {
  readData(&nFrame, base, ptr);
  readData(&vScale, base, ptr);
}
