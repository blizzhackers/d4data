/**
 * Definition: ResolvedPortalDestination
 * Hash: f5a0a118
 */

#include "ResolvedPortalDestination.h"

void ResolvedPortalDestination::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoWorld, base, current);
  current = ptr + 0x4;
  readData(&uEntranceGUID, base, current);
  current = ptr + 0x8;
  readData(&snoDestLevelArea, base, current);
  ptr += 0xc;
}
