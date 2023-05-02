/**
 * Definition: ByteDataMessage
 * Hash: be0eb873
 */

#include "ByteDataMessage.h"

void ByteDataMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&bData, base, current);
  ptr += 0x14;
}
