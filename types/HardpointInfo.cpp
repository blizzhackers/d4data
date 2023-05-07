/**
 * Definition: HardpointInfo
 * Hash: d8ee97d5
 */

#include "HardpointInfo.h"

void HardpointInfo::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwHash, base, current);
  current = ptr + 0x4;
  readData(&dwHashFlag, base, current);
  ptr += 0x8;
}
