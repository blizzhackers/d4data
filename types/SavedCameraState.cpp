/**
 * Definition: SavedCameraState
 * Hash: 81dc7d
 */

#include "SavedCameraState.h"

void SavedCameraState::read(const char* base, char* &ptr) {
  readData(&transform, base, ptr);
  readData(&wvCameraOffsetVector, base, ptr);
  readData(&wvLookAtOffsetVector, base, ptr);
  readData(&wvLastPOI, base, ptr);
}
