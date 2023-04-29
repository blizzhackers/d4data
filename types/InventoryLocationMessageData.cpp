/**
 * Definition: InventoryLocationMessageData
 * Hash: 5bf0a966
 */

#include "InventoryLocationMessageData.h"

void InventoryLocationMessageData::read(const char* base, char* &ptr) {
  readData(&annContainer, base, ptr);
  readData(&eSlot, base, ptr);
  readData(&r2, base, ptr);
}
