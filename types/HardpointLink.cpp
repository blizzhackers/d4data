/**
 * Definition: HardpointLink
 * Hash: d8f028b7
 */

#include "HardpointLink.h"

void HardpointLink::read(const char* base, char* &ptr) {
  readData(&tInfo, base, ptr);
}
