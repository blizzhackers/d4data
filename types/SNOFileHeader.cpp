/**
 * Definition: SNOFileHeader
 * Hash: 694e46b9
 */

#include "SNOFileHeader.h"

void SNOFileHeader::read(const char* base, char* &ptr) {
  readData(&dwSignature, base, ptr);
  readData(&dwFileTypeID, base, ptr);
  readData(&dwDummy, base, ptr);
  readData(&dwXMLHash, base, ptr);
}
