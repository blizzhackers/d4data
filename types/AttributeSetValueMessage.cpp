/**
 * Definition: AttributeSetValueMessage
 * Hash: 6ee82d42
 */

#include "AttributeSetValueMessage.h"

void AttributeSetValueMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&tKeyVal, base, ptr);
}
