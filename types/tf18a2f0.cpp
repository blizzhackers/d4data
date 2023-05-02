/**
 * Definition: tf18a2f0
 * Hash: f18a2f0
 */

#include "tf18a2f0.h"

void tf18a2f0::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&uID, base, current);
  ptr += 0x4;
}
