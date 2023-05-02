/**
 * Definition: tf67f903d
 * Hash: f67f903d
 */

#include "tf67f903d.h"

void tf67f903d::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  ptr += 0x10;
}
