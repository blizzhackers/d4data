/**
 * Definition: StackPortionMessage
 * Hash: c749a606
 */

#include "StackPortionMessage.h"

void StackPortionMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&annItem, base, current);
  current = ptr + 0x18;
  readData(&uAmount, base, current);
  ptr += 0x20;
}
