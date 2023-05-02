/**
 * Definition: FloatDataMessage
 * Hash: 88019975
 */

#include "FloatDataMessage.h"

void FloatDataMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&flData, base, current);
  ptr += 0x14;
}
