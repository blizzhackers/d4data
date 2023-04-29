/**
 * Definition: t5e14ecd2
 * Hash: 5e14ecd2
 */

#include "t5e14ecd2.h"

void t5e14ecd2::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoItemType, base, ptr);
}
