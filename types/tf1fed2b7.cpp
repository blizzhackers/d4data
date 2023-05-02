/**
 * Definition: tf1fed2b7
 * Hash: f1fed2b7
 */

#include "tf1fed2b7.h"

void tf1fed2b7::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&q, base, current);
  current = ptr + 0x10;
  readData(&p, base, current);
  current = ptr + 0x20;
  readData(&s, base, current);
  ptr += 0x30;
}
