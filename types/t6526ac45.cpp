/**
 * Definition: t6526ac45
 * Hash: 6526ac45
 */

#include "t6526ac45.h"

void t6526ac45::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_12fe198, base, current);
  ptr += 0x14;
}
