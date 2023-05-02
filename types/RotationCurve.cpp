/**
 * Definition: RotationCurve
 * Hash: b1737f95
 */

#include "RotationCurve.h"

void RotationCurve::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&ptKeysComp, base, current);
  ptr += 0x10;
}
