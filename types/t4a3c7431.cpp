/**
 * Definition: t4a3c7431
 * Hash: 4a3c7431
 */

#include "t4a3c7431.h"

void t4a3c7431::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&flMax, base, current);
  current = ptr + 0x4;
  readData(&flMin, base, current);
  ptr += 0x8;
}
