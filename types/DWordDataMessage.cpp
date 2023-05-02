/**
 * Definition: DWordDataMessage
 * Hash: 40d5185f
 */

#include "DWordDataMessage.h"

void DWordDataMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&dwData, base, current);
  ptr += 0x14;
}
