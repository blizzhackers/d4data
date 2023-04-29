/**
 * Definition: td3c3637f
 * Hash: d3c3637f
 */

#include "td3c3637f.h"

void td3c3637f::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&unk_c0222bf, base, ptr);
  readData(&dwPad, base, ptr);
}
