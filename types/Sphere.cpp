/**
 * Definition: Sphere
 * Hash: c9c1a8c7
 */

#include "Sphere.h"

void Sphere::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&wpCenter, base, current);
  current = ptr + 0xc;
  readData(&wdRadius, base, current);
  ptr += 0x10;
}
