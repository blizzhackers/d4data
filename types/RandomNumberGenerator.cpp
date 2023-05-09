/**
 * Definition: RandomNumberGenerator
 * Hash: 818076d1
 */

#include "RandomNumberGenerator.h"

void RandomNumberGenerator::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwSeed, base, current);
  current = ptr + 0x4;
  readData(&dwCarry, base, current);
  ptr += 0x8;
}
