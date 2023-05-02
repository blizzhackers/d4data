/**
 * Definition: ta5a3cb02
 * Hash: a5a3cb02
 */

#include "ta5a3cb02.h"

void ta5a3cb02::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&arPlatforms, base, current);
  ptr += 0x20;
}
