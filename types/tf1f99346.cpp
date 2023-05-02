/**
 * Definition: tf1f99346
 * Hash: f1f99346
 */

#include "tf1f99346.h"

void tf1f99346::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_b6d083b, base, current);
  ptr += 0x1a0;
}
