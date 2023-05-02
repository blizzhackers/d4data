/**
 * Definition: AttributeSetValueMessage
 * Hash: 6ee82d42
 */

#include "AttributeSetValueMessage.h"

void AttributeSetValueMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&tKeyVal, base, current);
  ptr += 0x28;
}
