/**
 * Definition: t2a9bceb0
 * Hash: 2a9bceb0
 */

#include "t2a9bceb0.h"

void t2a9bceb0::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_756ebc1, base, ptr);
}
