/**
 * Definition: HardpointLink
 * Hash: d8f028b7
 */

#include "HardpointLink.h"

void HardpointLink::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tInfo, base, current);
  ptr += 0x8;
}
