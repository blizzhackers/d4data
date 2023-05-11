/**
 * Definition: tf1ddf15d
 * Hash: f1ddf15d
 */

#include "tf1ddf15d.h"

void tf1ddf15d::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_4c6a043, base, current);
  ptr += 0x60;
}
