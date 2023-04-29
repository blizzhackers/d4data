/**
 * Definition: InventoryRequestUseMessage
 * Hash: 48d47349
 */

#include "InventoryRequestUseMessage.h"

void InventoryRequestUseMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&annItemToUse, base, ptr);
  readData(&snoItem, base, ptr);
  readData(&eType, base, ptr);
  readData(&annTarget, base, ptr);
  readData(&tPlace, base, ptr);
}
