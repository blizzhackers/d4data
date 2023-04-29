/**
 * Definition: ACDLookAtMessage
 * Hash: 9c456657
 */

#include "ACDLookAtMessage.h"

void ACDLookAtMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&annSrc, base, ptr);
  readData(&annTarget, base, ptr);
}
