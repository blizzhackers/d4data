/**
 * Definition: t5f527528
 * Hash: 5f527528
 */

#include "t5f527528.h"

void t5f527528::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&q, base, current);
  current = ptr + 0x10;
  readData(&p, base, current);
  ptr += 0x20;
}
