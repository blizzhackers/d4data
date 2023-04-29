/**
 * Definition: t88a6ceb4
 * Hash: 88a6ceb4
 */

#include "t88a6ceb4.h"

void t88a6ceb4::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&unk_c0222bf, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_f489816, base, ptr);
  readData(&flValue, base, ptr);
  readData(&unk_c7b2b18, base, ptr);
}
