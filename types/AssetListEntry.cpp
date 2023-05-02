/**
 * Definition: AssetListEntry
 * Hash: 46c0984e
 */

#include "AssetListEntry.h"

void AssetListEntry::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&nID, base, current);
  current = ptr + 0x4;
  readData(&nIndex, base, current);
  ptr += 0x8;
}
