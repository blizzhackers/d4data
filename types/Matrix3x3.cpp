/**
 * Definition: Matrix3x3
 * Hash: 815e08b3
 */

#include "Matrix3x3.h"

void Matrix3x3::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&_11, base, current);
  current = ptr + 0x4;
  readData(&_12, base, current);
  current = ptr + 0x8;
  readData(&_13, base, current);
  current = ptr + 0xc;
  readData(&_21, base, current);
  current = ptr + 0x10;
  readData(&_22, base, current);
  current = ptr + 0x14;
  readData(&_23, base, current);
  current = ptr + 0x18;
  readData(&_31, base, current);
  current = ptr + 0x1c;
  readData(&_32, base, current);
  current = ptr + 0x20;
  readData(&_33, base, current);
  ptr += 0x24;
}
