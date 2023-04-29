/**
 * Definition: PRSTransform
 * Hash: f5157d91
 */

#include "PRSTransform.h"

void PRSTransform::read(const char* base, char* &ptr) {
  readData(&q, base, ptr);
  readData(&wp, base, ptr);
  readData(&vScale, base, ptr);
}
