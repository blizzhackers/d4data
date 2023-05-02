/**
 * Definition: t3bb15785
 * Hash: 3bb15785
 */

#include "t3bb15785.h"

void t3bb15785::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoLayer, base, current);
  current = ptr + 0x4;
  readData(&tSettings, base, current);
  ptr += 0x84;
}
