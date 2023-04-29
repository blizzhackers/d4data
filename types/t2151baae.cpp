/**
 * Definition: t2151baae
 * Hash: 2151baae
 */

#include "t2151baae.h"

void t2151baae::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&flTime, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&snoSound, base, ptr);
}
