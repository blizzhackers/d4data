/**
 * Definition: WorldEvent
 * Hash: 7ed5a9ea
 */

#include "WorldEvent.h"

void WorldEvent::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tMarkerHandle, base, current);
  current = ptr + 0x8;
  readData(&snoWorldState, base, current);
  current = ptr + 0xc;
  readData(&nValue, base, current);
  current = ptr + 0x10;
  readData(&snoScene, base, current);
  ptr += 0x14;
}
