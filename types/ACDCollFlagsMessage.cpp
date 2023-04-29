/**
 * Definition: ACDCollFlagsMessage
 * Hash: fabcdfa4
 */

#include "ACDCollFlagsMessage.h"

void ACDCollFlagsMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&uDynamicFlagsNoOverlap, base, ptr);
  readData(&uDynamicMyFlags, base, ptr);
}
