/**
 * Definition: Int64DataMessage
 * Hash: 89a315d4
 */

#include "Int64DataMessage.h"

void Int64DataMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&nData, base, current);
  ptr += 0x18;
}
