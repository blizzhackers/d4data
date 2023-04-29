/**
 * Definition: t56c72db0
 * Hash: 56c72db0
 */

#include "t56c72db0.h"

void t56c72db0::read(const char* base, char* &ptr) {
  readData(&tName, base, ptr);
  readData(&unk_73750d7, base, ptr);
  readData(&unk_94d85e6, base, ptr);
  readData(&bIgnoreRange, base, ptr);
  readData(&bForceCast, base, ptr);
  readData(&unk_fca3b69, base, ptr);
  readData(&unk_c0426f9, base, ptr);
}
