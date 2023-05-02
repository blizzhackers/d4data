/**
 * Definition: Circle
 * Hash: a3f5e5b2
 */

#include "Circle.h"

void Circle::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&wpCenter, base, current);
  current = ptr + 0x8;
  readData(&wdRadius, base, current);
  ptr += 0xc;
}
