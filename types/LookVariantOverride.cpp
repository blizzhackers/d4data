/**
 * Definition: LookVariantOverride
 * Hash: a13668ea
 */

#include "LookVariantOverride.h"

void LookVariantOverride::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_fbd9a84, base, current);
  current = ptr + 0x4;
  readData(&unk_b0214a9, base, current);
  ptr += 0x8;
}
