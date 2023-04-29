/**
 * Definition: InventoryStackTransferMessage
 * Hash: ed80e1ee
 */

#include "InventoryStackTransferMessage.h"

void InventoryStackTransferMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&annItemSrc, base, ptr);
  readData(&annItemDest, base, ptr);
  readData(&uAmount, base, ptr);
}
