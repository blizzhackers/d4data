/**
 * Definition: AssetList
 * Hash: 3d8c39bc
 */

#include "AssetList.h"

void AssetList::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&arEntries, base, current);
  ptr += 0x10;
}
