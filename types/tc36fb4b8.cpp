/**
 * Definition: tc36fb4b8
 * Hash: c36fb4b8
 */

#include "tc36fb4b8.h"

void tc36fb4b8::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&arEntries, base, current);
  ptr += 0x10;
}
