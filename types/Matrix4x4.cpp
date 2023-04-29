/**
 * Definition: Matrix4x4
 * Hash: 815e0cf5
 */

#include "Matrix4x4.h"

void Matrix4x4::read(const char* base, char* &ptr) {
  readData(&_11, base, ptr);
  readData(&_12, base, ptr);
  readData(&_13, base, ptr);
  readData(&_14, base, ptr);
  readData(&_21, base, ptr);
  readData(&_22, base, ptr);
  readData(&_23, base, ptr);
  readData(&_24, base, ptr);
  readData(&_31, base, ptr);
  readData(&_32, base, ptr);
  readData(&_33, base, ptr);
  readData(&_34, base, ptr);
  readData(&_41, base, ptr);
  readData(&_42, base, ptr);
  readData(&_43, base, ptr);
  readData(&_44, base, ptr);
}
