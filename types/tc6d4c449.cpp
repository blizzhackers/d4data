/**
 * Definition: tc6d4c449
 * Hash: c6d4c449
 */

#include "tc6d4c449.h"

void tc6d4c449::read(const char* base, char* &ptr) {
  readData(&hIcon, base, ptr);
  readData(&hTitle, base, ptr);
  readData(&hDescription, base, ptr);
}
