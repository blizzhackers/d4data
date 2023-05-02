/**
 * Definition: tf5735f03
 * Hash: f5735f03
 */

#include "tf5735f03.h"

void tf5735f03::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  ptr += 0x104;
}
