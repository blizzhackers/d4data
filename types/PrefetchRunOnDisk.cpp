/**
 * Definition: PrefetchRunOnDisk
 * Hash: 2e1ea00e
 */

#include "PrefetchRunOnDisk.h"

void PrefetchRunOnDisk::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&uCount, base, current);
  current = ptr + 0x4;
  readData(&uStart, base, current);
  ptr += 0x8;
}
