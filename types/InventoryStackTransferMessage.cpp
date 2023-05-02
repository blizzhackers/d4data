/**
 * Definition: InventoryStackTransferMessage
 * Hash: ed80e1ee
 */

#include "InventoryStackTransferMessage.h"

void InventoryStackTransferMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&annItemSrc, base, current);
  current = ptr + 0x18;
  readData(&annItemDest, base, current);
  current = ptr + 0x20;
  readData(&uAmount, base, current);
  ptr += 0x28;
}
