/**
 * Definition: SNONameDataMessage
 * Hash: 5fbfd150
 */

#include "SNONameDataMessage.h"

void SNONameDataMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&snoName, base, current);
  ptr += 0x18;
}
