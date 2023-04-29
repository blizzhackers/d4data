/**
 * Definition: tbb6f3f3b
 * Hash: bb6f3f3b
 */

#include "tbb6f3f3b.h"

void tbb6f3f3b::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&unk_a0febeb, base, ptr);
}
