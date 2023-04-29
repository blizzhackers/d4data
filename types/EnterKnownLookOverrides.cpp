/**
 * Definition: EnterKnownLookOverrides
 * Hash: 5b1055b3
 */

#include "EnterKnownLookOverrides.h"

void EnterKnownLookOverrides::read(const char* base, char* &ptr) {
  readData(&aLookOverrides, base, ptr);
  readData(&unk_3fb7293, base, ptr);
}
