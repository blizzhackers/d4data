/**
 * Definition: RotationKey
 * Hash: a4034979
 */

#include "RotationKey.h"

void RotationKey::read(const char* base, char* &ptr) {
  readData(&nFrame, base, ptr);
  readData(&q16, base, ptr);
}
