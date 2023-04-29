/**
 * Definition: tdd2a5307
 * Hash: dd2a5307
 */

#include "tdd2a5307.h"

void tdd2a5307::read(const char* base, char* &ptr) {
  readData(&tBoneName, base, ptr);
  readData(&aPitchMin, base, ptr);
  readData(&aPitchMax, base, ptr);
}
