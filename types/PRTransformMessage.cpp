/**
 * Definition: PRTransformMessage
 * Hash: 29a95f43
 */

#include "PRTransformMessage.h"

void PRTransformMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&tTransform, base, current);
  ptr += 0x2c;
}
