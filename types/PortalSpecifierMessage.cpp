/**
 * Definition: PortalSpecifierMessage
 * Hash: cc815fd1
 */

#include "PortalSpecifierMessage.h"

void PortalSpecifierMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&tResolvedDest, base, current);
  ptr += 0x24;
}
