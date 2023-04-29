/**
 * Definition: tc55bfb36
 * Hash: c55bfb36
 */

#include "tc55bfb36.h"

void tc55bfb36::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&eParamType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tMarkerHandle, base, ptr);
}
