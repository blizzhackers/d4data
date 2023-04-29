/**
 * Definition: t99d2f9b4
 * Hash: 99d2f9b4
 */

#include "t99d2f9b4.h"

void t99d2f9b4::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&unk_d8a1f3b, base, ptr);
}
