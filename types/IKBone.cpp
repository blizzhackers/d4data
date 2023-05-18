/**
 * Definition: IKBone
 * Hash: afbbdb78
 */

#include "IKBone.h"

void IKBone::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&nBoneIndex, base, current);
  ptr += 0x4;
}
