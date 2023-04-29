/**
 * Definition: AssetList
 * Hash: 3d8c39bc
 */

#include "AssetList.h"

void AssetList::read(const char* base, char* &ptr) {
  readData(&arEntries, base, ptr);
}
