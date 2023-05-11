/**
 * Definition: GlobalWaypointData
 * Hash: ce454926
 */

#include "GlobalWaypointData.h"

void GlobalWaypointData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&arGlobalMarkerActors, base, current);
  ptr += 0x20;
}
