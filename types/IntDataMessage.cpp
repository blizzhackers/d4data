/**
 * Definition: IntDataMessage
 * Hash: 8ba1de2a
 */

#include "IntDataMessage.h"

void IntDataMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&nData, base, ptr);
}
