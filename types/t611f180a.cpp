/**
 * Definition: t611f180a
 * Hash: 611f180a
 */

#include "t611f180a.h"

void t611f180a::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x14;
  readData(&snoPower, base, current);
  ptr += 0x18;
}
