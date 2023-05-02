/**
 * Definition: tfc41276e
 * Hash: fc41276e
 */

#include "tfc41276e.h"

void tfc41276e::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szName, base, current);
  current = ptr + 0x8;
  readData(&unk_fd93db3, base, current);
  ptr += 0x18;
}
