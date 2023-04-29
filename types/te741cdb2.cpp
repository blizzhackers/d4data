/**
 * Definition: te741cdb2
 * Hash: e741cdb2
 */

#include "te741cdb2.h"

void te741cdb2::read(const char* base, char* &ptr) {
  readData(&i1, base, ptr);
  readData(&i2, base, ptr);
  readData(&i3, base, ptr);
  readData(&unk_59acc17, base, ptr);
  readData(&dwGameFlags, base, ptr);
  readData(&dwIncludeMask, base, ptr);
}
