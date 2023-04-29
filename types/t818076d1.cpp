/**
 * Definition: t818076d1
 * Hash: 818076d1
 */

#include "t818076d1.h"

void t818076d1::read(const char* base, char* &ptr) {
  readData(&dwSeed, base, ptr);
  readData(&dwCarry, base, ptr);
}
