/**
 * Definition: t2f8b25ef
 * Hash: 2f8b25ef
 */

#include "t2f8b25ef.h"

void t2f8b25ef::read(const char* base, char* &ptr) {
  readData(&i1, base, ptr);
  readData(&i2, base, ptr);
  readData(&i3, base, ptr);
  readData(&w1, base, ptr);
  readData(&w2, base, ptr);
  readData(&w3, base, ptr);
  readData(&unk_59acc17, base, ptr);
  readData(&dwGameFlags, base, ptr);
  readData(&dwIncludeMask, base, ptr);
}
