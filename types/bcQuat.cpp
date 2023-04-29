/**
 * Definition: bcQuat
 * Hash: ebc770e0
 */

#include "bcQuat.h"

void bcQuat::read(const char* base, char* &ptr) {
  readData(&x, base, ptr);
  readData(&y, base, ptr);
  readData(&z, base, ptr);
  readData(&w, base, ptr);
}
