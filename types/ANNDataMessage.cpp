/**
 * Definition: ANNDataMessage
 * Hash: 819f049c
 */

#include "ANNDataMessage.h"

void ANNDataMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  ptr += 0x18;
}
