/**
 * Definition: VersionsMessage
 * Hash: 4de0473e
 */

#include "VersionsMessage.h"

void VersionsMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&uProtocolHash, base, current);
  current = ptr + 0x14;
  readData(&szBuildVer, base, current);
  current = ptr + 0x38;
  readData(&unk_b14990a, base, current);
  ptr += 0x40;
}
