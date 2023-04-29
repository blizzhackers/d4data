/**
 * Definition: AssetListEntry
 * Hash: 46c0984e
 */

#include "AssetListEntry.h"

void AssetListEntry::read(const char* base, char* &ptr) {
  readData(&nID, base, ptr);
  readData(&nIndex, base, ptr);
}
