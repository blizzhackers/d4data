/**
 * Definition: t816e8b4c
 * Hash: 816e8b4c
 */

#include "t816e8b4c.h"

void t816e8b4c::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tCapsule, base, current);
  current = ptr + 0x40;
  readData(&unk_bb57eb6, base, current);
  ptr += 0x44;
}
