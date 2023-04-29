/**
 * Definition: t2b0b488
 * Hash: 2b0b488
 */

#include "t2b0b488.h"

void t2b0b488::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoWorld, base, ptr);
  readData(&wpLocation, base, ptr);
  readData(&unk_336454f, base, ptr);
  readData(&unk_164ef1e, base, ptr);
}
