/**
 * Definition: td4235100
 * Hash: d4235100
 */

#include "td4235100.h"

void td4235100::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoActor, base, current);
  current = ptr + 0x4;
  readData(&unk_15efd3, base, current);
  ptr += 0xc;
}
