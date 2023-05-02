/**
 * Definition: taf6042ce
 * Hash: af6042ce
 */

#include "taf6042ce.h"

void taf6042ce::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szDrawHook, base, current);
  ptr += 0x10;
}
