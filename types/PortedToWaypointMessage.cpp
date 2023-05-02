/**
 * Definition: PortedToWaypointMessage
 * Hash: b56c7171
 */

#include "PortedToWaypointMessage.h"

void PortedToWaypointMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_dce541c, base, current);
  current = ptr + 0x14;
  readData(&snoLevelArea, base, current);
  ptr += 0x18;
}
