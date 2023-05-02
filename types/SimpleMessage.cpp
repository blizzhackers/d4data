/**
 * Definition: SimpleMessage
 * Hash: d271bf4f
 */

#include "SimpleMessage.h"

void SimpleMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  ptr += 0x10;
}
