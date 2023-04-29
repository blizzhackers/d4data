/**
 * Definition: TranslationCurve
 * Hash: 235578f4
 */

#include "TranslationCurve.h"

void TranslationCurve::read(const char* base, char* &ptr) {
  readData(&ptKeysComp, base, ptr);
}
