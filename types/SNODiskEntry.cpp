/**
 * Definition: SNODiskEntry
 * Hash: 2b97cd0d
 */

#include "SNODiskEntry.h"

void SNODiskEntry::read(const char* base, char* &ptr) {
  readData(&snoGroup, base, ptr);
  readData(&uGuid, base, ptr);
  readData(&dwNameOffset, base, ptr);
}
