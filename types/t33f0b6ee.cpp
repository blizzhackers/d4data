/**
 * Definition: t33f0b6ee
 * Hash: 33f0b6ee
 */

#include "t33f0b6ee.h"

void t33f0b6ee::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&unk_1833d57, base, ptr);
  readData(&flSecs, base, ptr);
}
