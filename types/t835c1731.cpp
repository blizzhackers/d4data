/**
 * Definition: t835c1731
 * Hash: 835c1731
 */

#include "t835c1731.h"

void t835c1731::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&coeff, base, current);
  ptr += 0x30;
}
