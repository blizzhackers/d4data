/**
 * Definition: ACDLookAtMessage
 * Hash: 9c456657
 */

#include "ACDLookAtMessage.h"

void ACDLookAtMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&annSrc, base, current);
  current = ptr + 0x18;
  readData(&annTarget, base, current);
  ptr += 0x20;
}
