/**
 * Definition: tc0fa945c
 * Hash: c0fa945c
 */

#include "tc0fa945c.h"

void tc0fa945c::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
}
