/**
 * Definition: t2bcf7514
 * Hash: 2bcf7514
 */

#include "t2bcf7514.h"

void t2bcf7514::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_9b43ddf, base, current);
  current = ptr + 0x4;
  readData(&unk_a4ff40, base, current);
  current = ptr + 0x8;
  readData(&flMaxSpeed, base, current);
  ptr += 0xc;
}
