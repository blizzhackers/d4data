/**
 * Definition: HearthPortalInfoMessage
 * Hash: 39724e5f
 */

#include "HearthPortalInfoMessage.h"

void HearthPortalInfoMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoLevelArea, base, ptr);
  readData(&annPortal, base, ptr);
  readData(&bResetUI, base, ptr);
}
