/**
 * Definition: t1cacaaed
 * Hash: 1cacaaed
 */

#include "t1cacaaed.h"

void t1cacaaed::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_ebf9bb4, base, ptr);
  readData(&flValue, base, ptr);
}
