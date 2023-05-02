/**
 * Definition: Matrix4x4
 * Hash: 815e0cf5
 */

#include "Matrix4x4.h"

void Matrix4x4::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&_11, base, current);
  current = ptr + 0x4;
  readData(&_12, base, current);
  current = ptr + 0x8;
  readData(&_13, base, current);
  current = ptr + 0xc;
  readData(&_14, base, current);
  current = ptr + 0x10;
  readData(&_21, base, current);
  current = ptr + 0x14;
  readData(&_22, base, current);
  current = ptr + 0x18;
  readData(&_23, base, current);
  current = ptr + 0x1c;
  readData(&_24, base, current);
  current = ptr + 0x20;
  readData(&_31, base, current);
  current = ptr + 0x24;
  readData(&_32, base, current);
  current = ptr + 0x28;
  readData(&_33, base, current);
  current = ptr + 0x2c;
  readData(&_34, base, current);
  current = ptr + 0x30;
  readData(&_41, base, current);
  current = ptr + 0x34;
  readData(&_42, base, current);
  current = ptr + 0x38;
  readData(&_43, base, current);
  current = ptr + 0x3c;
  readData(&_44, base, current);
  ptr += 0x40;
}
