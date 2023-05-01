/**
 * Definition: t4c2dc82
 * Hash: 4c2dc82
 */

#include "t4c2dc82.h"

void t4c2dc82::read(const char* base, char* &ptr) {
  readData(&localTransform, base, ptr);
  readData(&scale, base, ptr);
  readData(&unk_10099d9, base, ptr);
  readData(&unk_10099da, base, ptr);
  readData(&height, base, ptr);
  readData(&friction, base, ptr);
  readData(&boneIndex, base, ptr);
  readData(&unk_4571c9b, base, ptr);
  readData(&padding, base, ptr);
}
