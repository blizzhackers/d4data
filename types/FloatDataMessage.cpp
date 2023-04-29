/**
 * Definition: FloatDataMessage
 * Hash: 88019975
 */

#include "FloatDataMessage.h"

void FloatDataMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&flData, base, ptr);
}
