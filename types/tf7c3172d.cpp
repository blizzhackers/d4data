/**
 * Definition: tf7c3172d
 * Hash: f7c3172d
 */

#include "tf7c3172d.h"

void tf7c3172d::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  ptr += 0x18;
}
