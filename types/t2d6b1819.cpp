/**
 * Definition: t2d6b1819
 * Hash: 2d6b1819
 */

#include "t2d6b1819.h"

void t2d6b1819::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&unk_74867e8, base, ptr);
}
