/**
 * Definition: tcb02466c
 * Hash: cb02466c
 */

#include "tcb02466c.h"

void tcb02466c::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&arDungeons, base, current);
  ptr += 0x10;
}
