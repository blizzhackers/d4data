/**
 * Definition: ACDChangeGBHandleMessage
 * Hash: 8846de08
 */

#include "ACDChangeGBHandleMessage.h"

void ACDChangeGBHandleMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&hGB, base, ptr);
}
