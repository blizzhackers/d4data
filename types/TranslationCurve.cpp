/**
 * Definition: TranslationCurve
 * Hash: 235578f4
 */

#include "TranslationCurve.h"

void TranslationCurve::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&ptKeysComp, base, current);
  ptr += 0x10;
}
