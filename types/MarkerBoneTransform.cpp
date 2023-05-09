/**
 * Definition: MarkerBoneTransform
 * Hash: ed096762
 */

#include "MarkerBoneTransform.h"

void MarkerBoneTransform::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szName, base, current);
  current = ptr + 0x4;
  readData(&transform, base, current);
  ptr += 0x2c;
}
