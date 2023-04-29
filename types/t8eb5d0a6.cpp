/**
 * Definition: t8eb5d0a6
 * Hash: 8eb5d0a6
 */

#include "t8eb5d0a6.h"

void t8eb5d0a6::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&snoContext, base, ptr);
  readData(&unk_a3e2a60, base, ptr);
  readData(&unk_d415903, base, ptr);
}
