/**
 * Definition: t1eea12c4
 * Hash: 1eea12c4
 */

#include "t1eea12c4.h"

void t1eea12c4::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_ddfb7d6, base, ptr);
  readData(&bEnabled, base, ptr);
}
