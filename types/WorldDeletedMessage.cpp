/**
 * Definition: WorldDeletedMessage
 * Hash: 29d08b04
 */

#include "WorldDeletedMessage.h"

void WorldDeletedMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&idSWorld, base, current);
  ptr += 0x18;
}
