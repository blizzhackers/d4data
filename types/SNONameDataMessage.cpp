/**
 * Definition: SNONameDataMessage
 * Hash: 5fbfd150
 */

#include "SNONameDataMessage.h"

void SNONameDataMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoName, base, ptr);
}
