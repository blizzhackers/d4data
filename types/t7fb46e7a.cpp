/**
 * Definition: t7fb46e7a
 * Hash: 7fb46e7a
 */

#include "t7fb46e7a.h"

void t7fb46e7a::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&arNodes, base, current);
  current = ptr + 0x10;
  readData(&unk_36cc429, base, current);
  ptr += 0x20;
}
