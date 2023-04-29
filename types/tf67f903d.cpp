/**
 * Definition: tf67f903d
 * Hash: f67f903d
 */

#include "tf67f903d.h"

void tf67f903d::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
}
