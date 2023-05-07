/**
 * Definition: InventoryLocationMessageData
 * Hash: 5bf0a966
 */

#include "InventoryLocationMessageData.h"

void InventoryLocationMessageData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&annContainer, base, current);
  current = ptr + 0x8;
  readData(&eSlot, base, current);
  current = ptr + 0xc;
  readData(&pt, base, current);
  ptr += 0x14;
}
