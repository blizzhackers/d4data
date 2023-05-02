/**
 * Definition: t31c26ca2
 * Hash: 31c26ca2
 */

#include "t31c26ca2.h"

void t31c26ca2::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&value, base, current);
  current = ptr + 0x10;
  readData(&unk_b5a2c78, base, current);
  current = ptr + 0x18;
  readData(&unk_411da82, base, current);
  ptr += 0x50;
}
