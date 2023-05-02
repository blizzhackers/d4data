/**
 * Definition: FloatingAmountMessage
 * Hash: 9c8bc46d
 */

#include "FloatingAmountMessage.h"

void FloatingAmountMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&wpPlace, base, current);
  current = ptr + 0x28;
  readData(&uAmount, base, current);
  current = ptr + 0x30;
  readData(&eType, base, current);
  ptr += 0x38;
}
