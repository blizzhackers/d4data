/**
 * Definition: t288a8c0b
 * Hash: 288a8c0b
 */

#include "t288a8c0b.h"

void t288a8c0b::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_7e407c7, base, current);
  current = ptr + 0x38;
  readData(&unk_dce541c, base, current);
  ptr += 0x3c;
}
