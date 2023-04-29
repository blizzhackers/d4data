/**
 * Definition: ACDTranslateAckMessage
 * Hash: a41317ca
 */

#include "ACDTranslateAckMessage.h"

void ACDTranslateAckMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&uAckValue, base, ptr);
}
