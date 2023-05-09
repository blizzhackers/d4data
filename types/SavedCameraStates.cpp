/**
 * Definition: SavedCameraStates
 * Hash: 10bd6c90
 */

#include "SavedCameraStates.h"

void SavedCameraStates::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&arCameraStates, base, current);
  ptr += 0x10;
}
