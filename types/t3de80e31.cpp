/**
 * Definition: t3de80e31
 * Hash: 3de80e31
 */

#include "t3de80e31.h"

void t3de80e31::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&nType, base, ptr);
  readData(&arParams, base, ptr);
  readData(&unk_2b2f2eb, base, ptr);
  readData(&tData, base, ptr);
}
