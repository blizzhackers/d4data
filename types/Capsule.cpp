/**
 * Definition: Capsule
 * Hash: fee138d
 */

#include "Capsule.h"

void Capsule::read(const char* base, char* &ptr) {
  readData(&wp1, base, ptr);
  readData(&wp2, base, ptr);
  readData(&flRadius, base, ptr);
}
