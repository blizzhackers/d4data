/**
 * Definition: SNODataMessage
 * Hash: dd166f4f
 */

#include "SNODataMessage.h"

void SNODataMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoData, base, ptr);
}
