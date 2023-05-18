/**
 * Definition: CurrentZoneSubcondition
 * Hash: 2a9bceb0
 */

#include "CurrentZoneSubcondition.h"

void CurrentZoneSubcondition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&eZone, base, current);
  ptr += 0x20;
}
