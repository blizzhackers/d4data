/**
 * Definition: SNOFileHeader
 * Hash: 694e46b9
 */

#include "SNOFileHeader.h"

void SNOFileHeader::read(const char* base, char* &ptr) {
  readData(&dwSignature, base, ptr);
  readData(&unk_7eba88, base, ptr);
  readData(&dwDummy, base, ptr);
  readData(&dwXMLHash, base, ptr);
}
