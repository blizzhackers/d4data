/**
 * Definition: tc661a6fd
 * Hash: c661a6fd
 */

#include "tc661a6fd.h"

void tc661a6fd::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwID, base, current);
  current = ptr + 0x8;
  readData(&unk_c94355b, base, current);
  current = ptr + 0x18;
  readData(&unk_b76f230, base, current);
  ptr += 0x20;
}
