/**
 * Definition: td044f267
 * Hash: d044f267
 */

#include "td044f267.h"

void td044f267::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&arConditions, base, ptr);
}
