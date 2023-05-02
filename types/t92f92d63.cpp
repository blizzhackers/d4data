/**
 * Definition: t92f92d63
 * Hash: 92f92d63
 */

#include "t92f92d63.h"

void t92f92d63::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  ptr += 0x104;
}
