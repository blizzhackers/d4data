/**
 * Definition: t82008b02
 * Hash: 82008b02
 */

#include "t82008b02.h"

void t82008b02::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwSeed, base, current);
  current = ptr + 0x4;
  readData(&dwCarry, base, current);
  ptr += 0x8;
}
