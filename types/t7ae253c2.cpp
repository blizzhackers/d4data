/**
 * Definition: t7ae253c2
 * Hash: 7ae253c2
 */

#include "t7ae253c2.h"

void t7ae253c2::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&flRadius, base, current);
  current = ptr + 0x8;
  readData(&bOverlap, base, current);
  current = ptr + 0x10;
  readData(&wp1, base, current);
  current = ptr + 0x20;
  readData(&wp2, base, current);
  ptr += 0x30;
}
