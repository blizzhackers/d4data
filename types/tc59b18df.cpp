/**
 * Definition: tc59b18df
 * Hash: c59b18df
 */

#include "tc59b18df.h"

void tc59b18df::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&vote, base, current);
  ptr += 0x14;
}
