/**
 * Definition: t7bd3842a
 * Hash: 7bd3842a
 */

#include "t7bd3842a.h"

void t7bd3842a::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szTag, base, current);
  ptr += 0x4;
}
