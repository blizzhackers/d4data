/**
 * Definition: ta5410c31
 * Hash: a5410c31
 */

#include "ta5410c31.h"

void ta5410c31::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_606dae5, base, current);
  current = ptr + 0x14;
  readData(&bonus, base, current);
  ptr += 0x34;
}
