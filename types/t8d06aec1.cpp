/**
 * Definition: t8d06aec1
 * Hash: 8d06aec1
 */

#include "t8d06aec1.h"

void t8d06aec1::read(const char* base, char* &ptr) {
  readData(&invMass, base, ptr);
  readData(&params, base, ptr);
  readData(&scale, base, ptr);
  readData(&i1, base, ptr);
  readData(&i2, base, ptr);
  readData(&i3, base, ptr);
  readData(&i4, base, ptr);
  readData(&padding, base, ptr);
}
