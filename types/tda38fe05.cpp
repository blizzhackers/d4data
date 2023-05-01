/**
 * Definition: tda38fe05
 * Hash: da38fe05
 */

#include "tda38fe05.h"

void tda38fe05::read(const char* base, char* &ptr) {
  readData(&localTransform, base, ptr);
  readData(&unk_9c026b5, base, ptr);
  readData(&friction, base, ptr);
  readData(&boneIndex, base, ptr);
  readData(&padding, base, ptr);
}
