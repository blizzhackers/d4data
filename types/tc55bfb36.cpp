/**
 * Definition: tc55bfb36
 * Hash: c55bfb36
 */

#include "tc55bfb36.h"

void tc55bfb36::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&eParamType, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&tMarkerHandle, base, current);
  ptr += 0x20;
}
