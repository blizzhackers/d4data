/**
 * Definition: UInt64DataMessage
 * Hash: 4bfb2029
 */

#include "UInt64DataMessage.h"

void UInt64DataMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&uData, base, ptr);
}
