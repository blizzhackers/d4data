/**
 * Definition: td6dab54d
 * Hash: d6dab54d
 */

#include "td6dab54d.h"

void td6dab54d::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_d603308, base, current);
  current = ptr + 0x4;
  readData(&tName, base, current);
  ptr += 0x8;
}
