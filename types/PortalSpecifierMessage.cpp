/**
 * Definition: PortalSpecifierMessage
 * Hash: cc815fd1
 */

#include "PortalSpecifierMessage.h"

void PortalSpecifierMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&tResolvedDest, base, ptr);
}
