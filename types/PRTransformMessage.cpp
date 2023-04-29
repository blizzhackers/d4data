/**
 * Definition: PRTransformMessage
 * Hash: 29a95f43
 */

#include "PRTransformMessage.h"

void PRTransformMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&tTransform, base, ptr);
}
