/**
 * Definition: SNODiskEntry
 * Hash: 2b97cd0d
 */

#include "SNODiskEntry.h"

void SNODiskEntry::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoGroup, base, current);
  current = ptr + 0x4;
  readData(&uGuid, base, current);
  current = ptr + 0x8;
  readData(&dwNameOffset, base, current);
  ptr += 0xc;
}
