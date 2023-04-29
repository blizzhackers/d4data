/**
 * Definition: ScaleCurve
 * Hash: 4aa799ed
 */

#include "ScaleCurve.h"

void ScaleCurve::read(const char* base, char* &ptr) {
  readData(&ptKeysComp, base, ptr);
}
