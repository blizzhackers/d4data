/**
 * Definition: ByteDataMessage
 * Hash: be0eb873
 */

#include "ByteDataMessage.h"

void ByteDataMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&bData, base, ptr);
}
