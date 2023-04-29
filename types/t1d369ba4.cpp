/**
 * Definition: t1d369ba4
 * Hash: 1d369ba4
 */

#include "t1d369ba4.h"

void t1d369ba4::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&idLevelArea, base, ptr);
  readData(&gbidType, base, ptr);
  readData(&unk_2b95c58, base, ptr);
  readData(&nGroupIndex, base, ptr);
  readData(&unk_5862894, base, ptr);
}
