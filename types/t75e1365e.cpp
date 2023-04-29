/**
 * Definition: t75e1365e
 * Hash: 75e1365e
 */

#include "t75e1365e.h"

void t75e1365e::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoMusic, base, ptr);
}
