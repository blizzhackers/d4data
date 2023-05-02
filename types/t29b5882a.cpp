/**
 * Definition: t29b5882a
 * Hash: 29b5882a
 */

#include "t29b5882a.h"

void t29b5882a::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_d7b2cd7, base, current);
  current = ptr + 0x4;
  readData(&bNegate, base, current);
  ptr += 0x8;
}
