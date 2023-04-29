/**
 * Definition: GBIDDataMessage
 * Hash: 8f51d975
 */

#include "GBIDDataMessage.h"

void GBIDDataMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&gbidData, base, ptr);
}
