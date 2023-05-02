/**
 * Definition: InventoryRequestMoveMessage
 * Hash: b2ae3f13
 */

#include "InventoryRequestMoveMessage.h"

void InventoryRequestMoveMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&annItem, base, current);
  current = ptr + 0x18;
  readData(&tLocation, base, current);
  ptr += 0x2c;
}
