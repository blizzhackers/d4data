/**
 * Definition: PRTransform
 * Hash: 9a44539e
 */

#include "PRTransform.h"

void PRTransform::read(const char* base, char* &ptr) {
  readData(&q, base, ptr);
  readData(&wp, base, ptr);
}
