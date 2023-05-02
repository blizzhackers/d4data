/**
 * Definition: t2dd9d297
 * Hash: 2dd9d297
 */

#include "t2dd9d297.h"

void t2dd9d297::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_8a6cb1e, base, current);
  ptr += 0x18;
}
