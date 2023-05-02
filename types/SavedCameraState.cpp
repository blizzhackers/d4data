/**
 * Definition: SavedCameraState
 * Hash: 81dc7d
 */

#include "SavedCameraState.h"

void SavedCameraState::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&transform, base, current);
  current = ptr + 0x1c;
  readData(&wvCameraOffsetVector, base, current);
  current = ptr + 0x28;
  readData(&wvLookAtOffsetVector, base, current);
  current = ptr + 0x34;
  readData(&wvLastPOI, base, current);
  ptr += 0x40;
}
