/**
 * Definition: t80554fed
 * Hash: 80554fed
 */

#include "t80554fed.h"

void t80554fed::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&arNodes, base, current);
  current = ptr + 0x10;
  readData(&unk_36cc429, base, current);
  ptr += 0x20;
}
