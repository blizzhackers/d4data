/**
 * Definition: t49b186af
 * Hash: 49b186af
 */

#include "t49b186af.h"

void t49b186af::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
}
