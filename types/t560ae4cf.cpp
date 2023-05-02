/**
 * Definition: t560ae4cf
 * Hash: 560ae4cf
 */

#include "t560ae4cf.h"

void t560ae4cf::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x28;
  readData(&ptArrayNodes, base, current);
  ptr += 0x38;
}
