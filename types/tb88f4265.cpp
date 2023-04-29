/**
 * Definition: tb88f4265
 * Hash: b88f4265
 */

#include "tb88f4265.h"

void tb88f4265::read(const char* base, char* &ptr) {
  readData(&rx, base, ptr);
  readData(&ry, base, ptr);
  readData(&rz, base, ptr);
  readData(&p, base, ptr);
}
