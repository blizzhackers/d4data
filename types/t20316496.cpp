/**
 * Definition: t20316496
 * Hash: 20316496
 */

#include "t20316496.h"

void t20316496::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_e7b35bd, base, ptr);
  readData(&unk_c3afaa0, base, ptr);
  readData(&unk_b7d314f, base, ptr);
}
