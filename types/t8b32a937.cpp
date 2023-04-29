/**
 * Definition: t8b32a937
 * Hash: 8b32a937
 */

#include "t8b32a937.h"

void t8b32a937::read(const char* base, char* &ptr) {
  readData(&transform, base, ptr);
  readData(&aabbBounds, base, ptr);
  readData(&unk_d094b9a, base, ptr);
  readData(&unk_334eb2d, base, ptr);
  readData(&dwFlags, base, ptr);
}
