/**
 * Definition: te050809c
 * Hash: e050809c
 */

#include "te050809c.h"

void te050809c::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_4fdc522, base, current);
  current = ptr + 0x4;
  readData(&vLocalOffset, base, current);
  ptr += 0x10;
}
