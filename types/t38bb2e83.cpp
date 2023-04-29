/**
 * Definition: t38bb2e83
 * Hash: 38bb2e83
 */

#include "t38bb2e83.h"

void t38bb2e83::read(const char* base, char* &ptr) {
  readData(&tInfo, base, ptr);
  readData(&transform, base, ptr);
}
