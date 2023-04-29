/**
 * Definition: Circle
 * Hash: a3f5e5b2
 */

#include "Circle.h"

void Circle::read(const char* base, char* &ptr) {
  readData(&wpCenter, base, ptr);
  readData(&wdRadius, base, ptr);
}
