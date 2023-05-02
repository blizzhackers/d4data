/**
 * Definition: AppearanceLook
 * Hash: bb103065
 */

#include "AppearanceLook.h"

void AppearanceLook::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szLookName, base, current);
  ptr += 0x4;
}
