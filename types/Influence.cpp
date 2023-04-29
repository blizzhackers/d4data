/**
 * Definition: Influence
 * Hash: 6be58119
 */

#include "Influence.h"

void Influence::read(const char* base, char* &ptr) {
  readData(&nBoneIndex, base, ptr);
  readData(&flWeight, base, ptr);
}
