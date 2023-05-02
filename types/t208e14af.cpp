/**
 * Definition: t208e14af
 * Hash: 208e14af
 */

#include "t208e14af.h"

void t208e14af::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&nType, base, current);
  current = ptr + 0x14;
  readData(&arParams, base, current);
  current = ptr + 0x1c;
  readData(&unk_7edc2dd, base, current);
  ptr += 0x660;
}
