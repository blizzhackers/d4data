/**
 * Definition: Influence
 * Hash: 6be58119
 */

#include "Influence.h"

void Influence::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&nBoneIndex, base, current);
  current = ptr + 0x4;
  readData(&flWeight, base, current);
  ptr += 0x8;
}
