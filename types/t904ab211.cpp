/**
 * Definition: t904ab211
 * Hash: 904ab211
 */

#include "t904ab211.h"

void t904ab211::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_ebf9bb4, base, ptr);
  readData(&flValue, base, ptr);
}
