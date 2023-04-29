/**
 * Definition: tf1fed2b7
 * Hash: f1fed2b7
 */

#include "tf1fed2b7.h"

void tf1fed2b7::read(const char* base, char* &ptr) {
  readData(&q, base, ptr);
  readData(&p, base, ptr);
  readData(&s, base, ptr);
}
