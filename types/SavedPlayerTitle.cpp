/**
 * Definition: SavedPlayerTitle
 * Hash: 30f99fc2
 */

#include "SavedPlayerTitle.h"

void SavedPlayerTitle::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoPrefix, base, current);
  current = ptr + 0x4;
  readData(&snoSuffix, base, current);
  ptr += 0x8;
}
