/**
 * Definition: WorldDeletedMessage
 * Hash: 29d08b04
 */

#include "WorldDeletedMessage.h"

void WorldDeletedMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&idSWorld, base, ptr);
}
