/**
 * Definition: RotationCurve
 * Hash: b1737f95
 */

#include "RotationCurve.h"

void RotationCurve::read(const char* base, char* &ptr) {
  readData(&ptKeysComp, base, ptr);
}
