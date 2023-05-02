/**
 * Definition: ScaleCurve
 * Hash: 4aa799ed
 */

#include "ScaleCurve.h"

void ScaleCurve::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&ptKeysComp, base, current);
  ptr += 0x10;
}
