/**
 * Definition: HardpointName
 * Hash: d8f11f4a
 */

#include "HardpointName.h"

void HardpointName::read(const char* base, char* &ptr) {
  readData(&szName, base, ptr);
}
