/**
 * Definition: td6c51928
 * Hash: d6c51928
 */

#include "td6c51928.h"

void td6c51928::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_2fcab5a, base, ptr);
}
