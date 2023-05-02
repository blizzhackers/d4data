/**
 * Definition: IntDataMessage
 * Hash: 8ba1de2a
 */

#include "IntDataMessage.h"

void IntDataMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&nData, base, current);
  ptr += 0x14;
}
