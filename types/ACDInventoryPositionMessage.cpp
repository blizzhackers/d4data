/**
 * Definition: ACDInventoryPositionMessage
 * Hash: c77dcd30
 */

#include "ACDInventoryPositionMessage.h"

void ACDInventoryPositionMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&tInvLocationData, base, current);
  current = ptr + 0x2c;
  readData(&tLocType, base, current);
  current = ptr + 0x30;
  readData(&unk_9e938b5, base, current);
  ptr += 0x40;
}
