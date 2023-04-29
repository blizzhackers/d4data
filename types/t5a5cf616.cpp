/**
 * Definition: t5a5cf616
 * Hash: 5a5cf616
 */

#include "t5a5cf616.h"

void t5a5cf616::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&unk_c0222bf, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&nLevel, base, ptr);
}
