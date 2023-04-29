/**
 * Definition: InventoryRequestMoveMessage
 * Hash: b2ae3f13
 */

#include "InventoryRequestMoveMessage.h"

void InventoryRequestMoveMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&annItem, base, ptr);
  readData(&tLocation, base, ptr);
}
