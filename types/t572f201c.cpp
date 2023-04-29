/**
 * Definition: t572f201c
 * Hash: 572f201c
 */

#include "t572f201c.h"

void t572f201c::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tPhaseName, base, ptr);
  readData(&unk_fcb7313, base, ptr);
  readData(&unk_d0d932b, base, ptr);
  readData(&unk_9a8200e, base, ptr);
}
