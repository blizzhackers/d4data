/**
 * Definition: tc5310cce
 * Hash: c5310cce
 */

#include "tc5310cce.h"

void tc5310cce::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_627adad, base, current);
  ptr += 0x10;
}
