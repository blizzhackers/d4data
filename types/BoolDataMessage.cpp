/**
 * Definition: BoolDataMessage
 * Hash: 3758d64b
 */

#include "BoolDataMessage.h"

void BoolDataMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&bVal, base, ptr);
}
