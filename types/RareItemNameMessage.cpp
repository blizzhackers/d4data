/**
 * Definition: RareItemNameMessage
 * Hash: b7608b9f
 */

#include "RareItemNameMessage.h"

void RareItemNameMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&tRareItemName, base, current);
  ptr += 0x28;
}
