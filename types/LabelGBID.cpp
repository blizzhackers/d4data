/**
 * Definition: LabelGBID
 * Hash: 8511e6b6
 */

#include "LabelGBID.h"

void LabelGBID::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&nIndex, base, ptr);
}
