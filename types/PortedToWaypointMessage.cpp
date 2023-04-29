/**
 * Definition: PortedToWaypointMessage
 * Hash: b56c7171
 */

#include "PortedToWaypointMessage.h"

void PortedToWaypointMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_dce541c, base, ptr);
  readData(&snoLevelArea, base, ptr);
}
