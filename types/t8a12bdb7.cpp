/**
 * Definition: t8a12bdb7
 * Hash: 8a12bdb7
 */

#include "t8a12bdb7.h"

void t8a12bdb7::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_19301ba, base, current);
  current = ptr + 0x4;
  readData(&unk_36c0ef4, base, current);
  ptr += 0x8;
}
