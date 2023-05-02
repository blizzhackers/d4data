/**
 * Definition: UInt64DataMessage
 * Hash: 4bfb2029
 */

#include "UInt64DataMessage.h"

void UInt64DataMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&uData, base, current);
  ptr += 0x18;
}
