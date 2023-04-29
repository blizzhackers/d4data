/**
 * Definition: t82008b02
 * Hash: 82008b02
 */

#include "t82008b02.h"

void t82008b02::read(const char* base, char* &ptr) {
  readData(&dwSeed, base, ptr);
  readData(&dwCarry, base, ptr);
}
