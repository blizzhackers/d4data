/**
 * Definition: tb2e7d3cf
 * Hash: b2e7d3cf
 */

#include "tb2e7d3cf.h"

void tb2e7d3cf::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_e3331b5, base, current);
  current = ptr + 0x10;
  readData(&unk_a2b58a8, base, current);
  current = ptr + 0x20;
  readData(&tPrograms, base, current);
  ptr += 0x1d8;
}
