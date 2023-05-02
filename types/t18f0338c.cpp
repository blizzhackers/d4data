/**
 * Definition: t18f0338c
 * Hash: 18f0338c
 */

#include "t18f0338c.h"

void t18f0338c::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_dce541c, base, current);
  current = ptr + 0x14;
  readData(&unk_eb9441e, base, current);
  ptr += 0x2c;
}
