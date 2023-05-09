/**
 * Definition: DynamicPortalInfo
 * Hash: 9b2fb163
 */

#include "DynamicPortalInfo.h"

void DynamicPortalInfo::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szName, base, current);
  current = ptr + 0x4;
  readData(&tInfo, base, current);
  current = ptr + 0xdc;
  readData(&dwValue, base, current);
  ptr += 0xe0;
}
