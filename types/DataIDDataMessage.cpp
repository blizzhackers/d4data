/**
 * Definition: DataIDDataMessage
 * Hash: 11aa8166
 */

#include "DataIDDataMessage.h"

void DataIDDataMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&id, base, current);
  ptr += 0x14;
}
