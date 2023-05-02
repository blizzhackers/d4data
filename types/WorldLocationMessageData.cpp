/**
 * Definition: WorldLocationMessageData
 * Hash: 524ff320
 */

#include "WorldLocationMessageData.h"

void WorldLocationMessageData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&vScale, base, current);
  current = ptr + 0xc;
  readData(&transform, base, current);
  current = ptr + 0x28;
  readData(&idSWorld, base, current);
  ptr += 0x30;
}
