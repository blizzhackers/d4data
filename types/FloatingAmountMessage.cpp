/**
 * Definition: FloatingAmountMessage
 * Hash: 9c8bc46d
 */

#include "FloatingAmountMessage.h"

void FloatingAmountMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&wpPlace, base, ptr);
  readData(&uAmount, base, ptr);
  readData(&eType, base, ptr);
}
