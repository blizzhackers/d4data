/**
 * Definition: PRTransform
 * Hash: 9a44539e
 */

#include "PRTransform.h"

void PRTransform::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&q, base, current);
  current = ptr + 0x10;
  readData(&wp, base, current);
  ptr += 0x1c;
}
