/**
 * Definition: t4bfa20cf
 * Hash: 4bfa20cf
 */

#include "t4bfa20cf.h"

void t4bfa20cf::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&nType, base, ptr);
  readData(&arParams, base, ptr);
  readData(&nDataBlocks, base, ptr);
}
