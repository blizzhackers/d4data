/**
 * Definition: MarkerPrefabData
 * Hash: ba69c62c
 */

#include "MarkerPrefabData.h"

void MarkerPrefabData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&arPrefabCustomizations, base, current);
  ptr += 0x20;
}
