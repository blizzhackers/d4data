/**
 * Definition: td2f29025
 * Hash: d2f29025
 */

#include "td2f29025.h"

void td2f29025::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  ptr += 0x104;
}
