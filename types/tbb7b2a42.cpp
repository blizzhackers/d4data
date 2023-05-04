/**
 * Definition: tbb7b2a42
 * Hash: bb7b2a42
 */

#include "tbb7b2a42.h"

void tbb7b2a42::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&gbidSubzoneModifierTag, base, current);
  ptr += 0x20;
}
