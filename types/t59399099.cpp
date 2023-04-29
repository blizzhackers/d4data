/**
 * Definition: t59399099
 * Hash: 59399099
 */

#include "t59399099.h"

void t59399099::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoGlyph, base, ptr);
  readData(&unk_6499985, base, ptr);
}
