/**
 * Definition: t6c048b8b
 * Hash: 6c048b8b
 */

#include "t6c048b8b.h"

void t6c048b8b::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoLayer, base, current);
  current = ptr + 0x8;
  readData(&ptChunks, base, current);
  ptr += 0x18;
}
