/**
 * Definition: t252cba6b
 * Hash: 252cba6b
 */

#include "t252cba6b.h"

void t252cba6b::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&flTime, base, current);
  current = ptr + 0x4;
  readData(&unk_5bff46c, base, current);
  ptr += 0x8;
}
