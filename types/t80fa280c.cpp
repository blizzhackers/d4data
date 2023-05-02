/**
 * Definition: t80fa280c
 * Hash: 80fa280c
 */

#include "t80fa280c.h"

void t80fa280c::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&arNodes, base, current);
  current = ptr + 0x10;
  readData(&unk_36cc429, base, current);
  ptr += 0x20;
}
