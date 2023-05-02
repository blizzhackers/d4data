/**
 * Definition: HardpointName
 * Hash: d8f11f4a
 */

#include "HardpointName.h"

void HardpointName::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szName, base, current);
  ptr += 0x40;
}
