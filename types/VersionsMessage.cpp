/**
 * Definition: VersionsMessage
 * Hash: 4de0473e
 */

#include "VersionsMessage.h"

void VersionsMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&uProtocolHash, base, ptr);
  readData(&szBuildVer, base, ptr);
  readData(&unk_b14990a, base, ptr);
}
