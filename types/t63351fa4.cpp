/**
 * Definition: t63351fa4
 * Hash: 63351fa4
 */

#include "t63351fa4.h"

void t63351fa4::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_2883a68, base, current);
  ptr += 0x14;
}
