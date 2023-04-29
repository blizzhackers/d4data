/**
 * Definition: InventorySplitStackMessage
 * Hash: 64f7bad5
 */

#include "InventorySplitStackMessage.h"

void InventorySplitStackMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&annItem, base, ptr);
  readData(&uAmount, base, ptr);
  readData(&tLocation, base, ptr);
}
