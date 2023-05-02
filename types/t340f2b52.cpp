/**
 * Definition: t340f2b52
 * Hash: 340f2b52
 */

#include "t340f2b52.h"

void t340f2b52::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&arNodes, base, current);
  current = ptr + 0x10;
  readData(&unk_36cc429, base, current);
  ptr += 0x20;
}
