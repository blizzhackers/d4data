/**
 * Definition: tf472ad7e
 * Hash: f472ad7e
 */

#include "tf472ad7e.h"

void tf472ad7e::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
}
