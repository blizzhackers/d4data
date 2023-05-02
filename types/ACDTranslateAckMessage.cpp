/**
 * Definition: ACDTranslateAckMessage
 * Hash: a41317ca
 */

#include "ACDTranslateAckMessage.h"

void ACDTranslateAckMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&uAckValue, base, current);
  ptr += 0x14;
}
