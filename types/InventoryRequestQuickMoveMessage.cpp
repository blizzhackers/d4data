/**
 * Definition: InventoryRequestQuickMoveMessage
 * Hash: 855db250
 */

#include "InventoryRequestQuickMoveMessage.h"

void InventoryRequestQuickMoveMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&annItem, base, ptr);
  readData(&annOwner, base, ptr);
  readData(&eSlot, base, ptr);
  readData(&nSlotMinY, base, ptr);
  readData(&nSlotMaxY, base, ptr);
}
