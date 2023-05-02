/**
 * Definition: GBIDDataMessage
 * Hash: 8f51d975
 */

#include "GBIDDataMessage.h"

void GBIDDataMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&gbidData, base, current);
  ptr += 0x14;
}
