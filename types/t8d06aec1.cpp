/**
 * Definition: t8d06aec1
 * Hash: 8d06aec1
 */

#include "t8d06aec1.h"

void t8d06aec1::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&invMass, base, current);
  current = ptr + 0x10;
  readData(&params, base, current);
  current = ptr + 0x20;
  readData(&scale, base, current);
  current = ptr + 0x30;
  readData(&i1, base, current);
  current = ptr + 0x32;
  readData(&i2, base, current);
  current = ptr + 0x34;
  readData(&i3, base, current);
  current = ptr + 0x36;
  readData(&i4, base, current);
  current = ptr + 0x38;
  readData(&padding, base, current);
  ptr += 0x40;
}
