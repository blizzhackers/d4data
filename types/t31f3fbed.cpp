/**
 * Definition: t31f3fbed
 * Hash: 31f3fbed
 */

#include "t31f3fbed.h"

void t31f3fbed::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&unk_c0222bf, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_99e9721, base, ptr);
}
