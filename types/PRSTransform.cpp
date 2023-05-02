/**
 * Definition: PRSTransform
 * Hash: f5157d91
 */

#include "PRSTransform.h"

void PRSTransform::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&q, base, current);
  current = ptr + 0x10;
  readData(&wp, base, current);
  current = ptr + 0x1c;
  readData(&vScale, base, current);
  ptr += 0x28;
}
