/**
 * Definition: t7fc234c1
 * Hash: 7fc234c1
 */

#include "t7fc234c1.h"

void t7fc234c1::read(const char* base, char* &ptr) {
  readData(&localTransform, base, ptr);
  readData(&scale, base, ptr);
  readData(&unk_10099d9, base, ptr);
  readData(&unk_10099da, base, ptr);
  readData(&height, base, ptr);
  readData(&unk_9c026b5, base, ptr);
  readData(&boneIndex, base, ptr);
  readData(&unk_7092ef7, base, ptr);
}
