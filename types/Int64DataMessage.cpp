/**
 * Definition: Int64DataMessage
 * Hash: 89a315d4
 */

#include "Int64DataMessage.h"

void Int64DataMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&nData, base, ptr);
}
