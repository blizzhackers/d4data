/**
 * Definition: Matrix3x3
 * Hash: 815e08b3
 */

#include "Matrix3x3.h"

void Matrix3x3::read(const char* base, char* &ptr) {
  readData(&_11, base, ptr);
  readData(&_12, base, ptr);
  readData(&_13, base, ptr);
  readData(&_21, base, ptr);
  readData(&_22, base, ptr);
  readData(&_23, base, ptr);
  readData(&_31, base, ptr);
  readData(&_32, base, ptr);
  readData(&_33, base, ptr);
}
