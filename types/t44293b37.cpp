/**
 * Definition: t44293b37
 * Hash: 44293b37
 */

#include "t44293b37.h"

void t44293b37::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_a64fa3e, base, current);
  current = ptr + 0x8;
  readData(&szIDScrollbar, base, current);
  ptr += 0x18;
}
