/**
 * Definition: EnterKnownLookOverrides
 * Hash: 5b1055b3
 */

#include "EnterKnownLookOverrides.h"

void EnterKnownLookOverrides::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&aLookOverrides, base, current);
  current = ptr + 0x18;
  readData(&unk_3fb7293, base, current);
  ptr += 0x30;
}
