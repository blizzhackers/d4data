/**
 * Definition: ParagonThresholdEntry
 * Hash: 456084a7
 */

#include "ParagonThresholdEntry.h"

void ParagonThresholdEntry::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_72f7a95, base, current);
  current = ptr + 0x8;
  readData(&unk_ba3334, base, current);
  ptr += 0x28;
}
