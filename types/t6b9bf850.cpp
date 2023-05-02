/**
 * Definition: t6b9bf850
 * Hash: 6b9bf850
 */

#include "t6b9bf850.h"

void t6b9bf850::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&nType, base, current);
  current = ptr + 0x14;
  readData(&arParams, base, current);
  ptr += 0x1c;
}
