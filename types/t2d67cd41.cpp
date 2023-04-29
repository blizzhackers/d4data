/**
 * Definition: t2d67cd41
 * Hash: 2d67cd41
 */

#include "t2d67cd41.h"

void t2d67cd41::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&snoBuffPower, base, ptr);
  readData(&unk_6c4bff7, base, ptr);
}
