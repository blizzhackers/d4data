/**
 * Definition: taec481b3
 * Hash: aec481b3
 */

#include "taec481b3.h"

void taec481b3::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&arEntries, base, current);
  ptr += 0x10;
}
