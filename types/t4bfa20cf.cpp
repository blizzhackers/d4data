/**
 * Definition: t4bfa20cf
 * Hash: 4bfa20cf
 */

#include "t4bfa20cf.h"

void t4bfa20cf::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&nType, base, current);
  current = ptr + 0x14;
  readData(&arParams, base, current);
  current = ptr + 0x1c;
  readData(&nDataBlocks, base, current);
  ptr += 0x20;
}
