/**
 * Definition: Cylinder
 * Hash: 3b18a77a
 */

#include "Cylinder.h"

void Cylinder::read(const char* base, char* &ptr) {
  readData(&wp1, base, ptr);
  readData(&wp2, base, ptr);
  readData(&flRadius, base, ptr);
}
