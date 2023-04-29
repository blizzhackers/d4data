/**
 * Definition: t1af4235c
 * Hash: 1af4235c
 */

#include "t1af4235c.h"

void t1af4235c::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&unk_c0222bf, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&flValue, base, ptr);
  readData(&unk_adc7465, base, ptr);
  readData(&unk_c7b2b18, base, ptr);
}
