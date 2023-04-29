/**
 * Definition: ACDInventoryPositionMessage
 * Hash: c77dcd30
 */

#include "ACDInventoryPositionMessage.h"

void ACDInventoryPositionMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&tInvLocationData, base, ptr);
  readData(&tLocType, base, ptr);
  readData(&unk_9e938b5, base, ptr);
}
