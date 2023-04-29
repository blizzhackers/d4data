/**
 * Definition: t18f0338c
 * Hash: 18f0338c
 */

#include "t18f0338c.h"

void t18f0338c::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_dce541c, base, ptr);
  readData(&unk_eb9441e, base, ptr);
}
