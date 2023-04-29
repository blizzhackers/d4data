/**
 * Definition: tcad67b29
 * Hash: cad67b29
 */

#include "tcad67b29.h"

void tcad67b29::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_ddfb7d6, base, ptr);
  readData(&unk_ff59d1d, base, ptr);
}
