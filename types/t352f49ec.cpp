/**
 * Definition: t352f49ec
 * Hash: 352f49ec
 */

#include "t352f49ec.h"

void t352f49ec::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bInverse, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_ebf9bb4, base, ptr);
  readData(&flValue, base, ptr);
}
