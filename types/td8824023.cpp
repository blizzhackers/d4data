/**
 * Definition: td8824023
 * Hash: d8824023
 */

#include "td8824023.h"

void td8824023::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&accept, base, ptr);
}
