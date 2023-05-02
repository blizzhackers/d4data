/**
 * Definition: ACDChangeGBHandleMessage
 * Hash: 8846de08
 */

#include "ACDChangeGBHandleMessage.h"

void ACDChangeGBHandleMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&hGB, base, current);
  ptr += 0x20;
}
