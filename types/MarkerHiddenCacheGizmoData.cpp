/**
 * Definition: MarkerHiddenCacheGizmoData
 * Hash: a967fc2
 */

#include "MarkerHiddenCacheGizmoData.h"

void MarkerHiddenCacheGizmoData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&gbidHiddenCache, base, current);
  ptr += 0x4;
}
