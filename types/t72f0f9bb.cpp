/**
 * Definition: t72f0f9bb
 * Hash: 72f0f9bb
 */

#include "t72f0f9bb.h"

void t72f0f9bb::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_7d2386a, base, ptr);
  readData(&unk_6b4b5b8, base, ptr);
  readData(&snoJewelry, base, ptr);
  readData(&unk_3657ed3, base, ptr);
}
