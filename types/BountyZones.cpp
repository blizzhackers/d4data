/**
 * Definition: BountyZones
 * Hash: e5e3de90
 */

#include "BountyZones.h"

void BountyZones::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&eZone, base, current);
  current = ptr + 0x4;
  readData(&snoCondition, base, current);
  current = ptr + 0x8;
  readData(&arBounties, base, current);
  ptr += 0x18;
}
