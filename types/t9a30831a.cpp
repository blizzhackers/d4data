/**
 * Definition: t9a30831a
 * Hash: 9a30831a
 */

#include "t9a30831a.h"

void t9a30831a::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_b58b3e7, base, current);
  current = ptr + 0x4;
  readData(&unk_98a4167, base, current);
  ptr += 0x8;
}
