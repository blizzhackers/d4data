/**
 * Definition: t8b32a937
 * Hash: 8b32a937
 */

#include "t8b32a937.h"

void t8b32a937::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&transform, base, current);
  current = ptr + 0x28;
  readData(&aabbBounds, base, current);
  current = ptr + 0x40;
  readData(&unk_d094b9a, base, current);
  current = ptr + 0x44;
  readData(&unk_334eb2d, base, current);
  current = ptr + 0x48;
  readData(&dwFlags, base, current);
  ptr += 0x4c;
}
