/**
 * Definition: Quaternion16
 * Hash: 466dd9ad
 */

#include "Quaternion16.h"

void Quaternion16::read(const char* base, char* &ptr) {
  readData(&x, base, ptr);
  readData(&y, base, ptr);
  readData(&z, base, ptr);
  readData(&w, base, ptr);
}
