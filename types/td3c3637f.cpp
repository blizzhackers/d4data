/**
 * Definition: td3c3637f
 * Hash: d3c3637f
 */

#include "td3c3637f.h"

void td3c3637f::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x18;
  readData(&unk_c0222bf, base, current);
  current = ptr + 0x1c;
  readData(&dwPad, base, current);
  ptr += 0x20;
}
