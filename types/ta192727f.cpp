/**
 * Definition: ta192727f
 * Hash: a192727f
 */

#include "ta192727f.h"

void ta192727f::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_70bf7e7, base, current);
  ptr += 0x14;
}
