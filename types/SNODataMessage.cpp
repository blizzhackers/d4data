/**
 * Definition: SNODataMessage
 * Hash: dd166f4f
 */

#include "SNODataMessage.h"

void SNODataMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&snoData, base, current);
  ptr += 0x14;
}
