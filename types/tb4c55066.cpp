/**
 * Definition: tb4c55066
 * Hash: b4c55066
 */

#include "tb4c55066.h"

void tb4c55066::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&q, base, current);
  current = ptr + 0x10;
  readData(&wp, base, current);
  current = ptr + 0x1c;
  readData(&flScale, base, current);
  ptr += 0x20;
}
