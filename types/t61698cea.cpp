/**
 * Definition: t61698cea
 * Hash: 61698cea
 */

#include "t61698cea.h"

void t61698cea::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szOnEnd, base, current);
  ptr += 0x10;
}
