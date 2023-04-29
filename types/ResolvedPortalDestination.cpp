/**
 * Definition: ResolvedPortalDestination
 * Hash: f5a0a118
 */

#include "ResolvedPortalDestination.h"

void ResolvedPortalDestination::read(const char* base, char* &ptr) {
  readData(&snoWorld, base, ptr);
  readData(&uEntranceGUID, base, ptr);
  readData(&snoDestLevelArea, base, ptr);
}
