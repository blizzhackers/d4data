/**
 * Definition: SNOFileHeader
 * Hash: 694e46b9
 */

#include "SNOFileHeader.h"

void SNOFileHeader::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwSignature, base, current);
  current = ptr + 0x4;
  readData(&dwFileTypeID, base, current);
  current = ptr + 0x8;
  readData(&dwDummy, base, current);
  current = ptr + 0xc;
  readData(&dwXMLHash, base, current);
  ptr += 0x10;
}
