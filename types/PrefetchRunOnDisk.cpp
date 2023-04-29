/**
 * Definition: PrefetchRunOnDisk
 * Hash: 2e1ea00e
 */

#include "PrefetchRunOnDisk.h"

void PrefetchRunOnDisk::read(const char* base, char* &ptr) {
  readData(&uCount, base, ptr);
  readData(&uStart, base, ptr);
}
