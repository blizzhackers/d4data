/**
 * Definition: WorldLocationMessageData
 * Hash: 524ff320
 */

#include "WorldLocationMessageData.h"

void WorldLocationMessageData::read(const char* base, char* &ptr) {
  readData(&vScale, base, ptr);
  readData(&transform, base, ptr);
  readData(&idSWorld, base, ptr);
}
