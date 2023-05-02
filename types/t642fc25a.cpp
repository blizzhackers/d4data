/**
 * Definition: t642fc25a
 * Hash: 642fc25a
 */

#include "t642fc25a.h"

void t642fc25a::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&arNodes, base, current);
  current = ptr + 0x10;
  readData(&unk_36cc429, base, current);
  ptr += 0x20;
}
