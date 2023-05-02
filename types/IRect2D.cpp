/**
 * Definition: IRect2D
 * Hash: b9fe3f2d
 */

#include "IRect2D.h"

void IRect2D::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&left, base, current);
  current = ptr + 0x4;
  readData(&top, base, current);
  current = ptr + 0x8;
  readData(&right, base, current);
  current = ptr + 0xc;
  readData(&bottom, base, current);
  ptr += 0x10;
}
