/**
 * Definition: StackPortionMessage
 * Hash: c749a606
 */

#include "StackPortionMessage.h"

void StackPortionMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&annItem, base, ptr);
  readData(&uAmount, base, ptr);
}
