/**
 * Definition: tdb3f050c
 * Hash: db3f050c
 */

#include "tdb3f050c.h"

void tdb3f050c::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tPhaseName, base, ptr);
  readData(&unk_fcb7313, base, ptr);
  readData(&unk_d0d932b, base, ptr);
  readData(&unk_9a8200e, base, ptr);
}
