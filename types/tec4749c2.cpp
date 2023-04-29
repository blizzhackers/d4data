/**
 * Definition: tec4749c2
 * Hash: ec4749c2
 */

#include "tec4749c2.h"

void tec4749c2::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_b23f628, base, ptr);
}
