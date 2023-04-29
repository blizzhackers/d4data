/**
 * Definition: AppearanceLook
 * Hash: bb103065
 */

#include "AppearanceLook.h"

void AppearanceLook::read(const char* base, char* &ptr) {
  readData(&szLookName, base, ptr);
}
