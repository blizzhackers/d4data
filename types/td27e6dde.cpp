/**
 * Definition: td27e6dde
 * Hash: d27e6dde
 */

#include "td27e6dde.h"

void td27e6dde::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
}
