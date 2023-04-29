/**
 * Definition: t1f843277
 * Hash: 1f843277
 */

#include "t1f843277.h"

void t1f843277::read(const char* base, char* &ptr) {
  readData(&tHardpointLink, base, ptr);
  readData(&unk_2cbb1b0, base, ptr);
  readData(&eTargetType, base, ptr);
  readData(&unk_c33645f, base, ptr);
}
