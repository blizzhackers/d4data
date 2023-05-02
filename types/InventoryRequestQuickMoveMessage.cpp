/**
 * Definition: InventoryRequestQuickMoveMessage
 * Hash: 855db250
 */

#include "InventoryRequestQuickMoveMessage.h"

void InventoryRequestQuickMoveMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&annItem, base, current);
  current = ptr + 0x18;
  readData(&annOwner, base, current);
  current = ptr + 0x20;
  readData(&eSlot, base, current);
  current = ptr + 0x24;
  readData(&nSlotMinY, base, current);
  current = ptr + 0x28;
  readData(&nSlotMaxY, base, current);
  ptr += 0x2c;
}
