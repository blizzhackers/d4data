/**
 * Definition: ACDCollFlagsMessage
 * Hash: fabcdfa4
 */

#include "ACDCollFlagsMessage.h"

void ACDCollFlagsMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&uDynamicFlagsNoOverlap, base, current);
  current = ptr + 0x1c;
  readData(&uDynamicMyFlags, base, current);
  ptr += 0x20;
}
