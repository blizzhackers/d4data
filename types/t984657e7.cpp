/**
 * Definition: t984657e7
 * Hash: 984657e7
 */

#include "t984657e7.h"

void t984657e7::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&eStat, base, current);
  current = ptr + 0x4;
  readData(&nAmount, base, current);
  ptr += 0x8;
}
