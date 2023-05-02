/**
 * Definition: t78541b1a
 * Hash: 78541b1a
 */

#include "t78541b1a.h"

void t78541b1a::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_70a927c, base, current);
  current = ptr + 0x4;
  readData(&flDelta, base, current);
  ptr += 0x8;
}
