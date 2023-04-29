/**
 * Definition: t23c42d70
 * Hash: 23c42d70
 */

#include "t23c42d70.h"

void t23c42d70::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&szLogString, base, ptr);
  readData(&unk_a23ac9b, base, ptr);
  readData(&unk_6248a18, base, ptr);
  readData(&uACDInSameWorld, base, ptr);
  readData(&ann, base, ptr);
}
