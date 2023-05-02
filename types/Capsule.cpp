/**
 * Definition: Capsule
 * Hash: fee138d
 */

#include "Capsule.h"

void Capsule::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&wp1, base, current);
  current = ptr + 0xc;
  readData(&wp2, base, current);
  current = ptr + 0x18;
  readData(&flRadius, base, current);
  ptr += 0x1c;
}
