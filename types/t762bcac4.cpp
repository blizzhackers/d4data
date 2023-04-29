/**
 * Definition: t762bcac4
 * Hash: 762bcac4
 */

#include "t762bcac4.h"

void t762bcac4::read(const char* base, char* &ptr) {
  readData(&szName, base, ptr);
  readData(&hLabel, base, ptr);
  readData(&snoMask, base, ptr);
  readData(&hIcon, base, ptr);
}
