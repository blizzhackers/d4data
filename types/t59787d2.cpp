/**
 * Definition: t59787d2
 * Hash: 59787d2
 */

#include "t59787d2.h"

void t59787d2::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&bIsUnique, base, ptr);
}
