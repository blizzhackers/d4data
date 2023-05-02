/**
 * Definition: InventorySplitStackMessage
 * Hash: 64f7bad5
 */

#include "InventorySplitStackMessage.h"

void InventorySplitStackMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&annItem, base, current);
  current = ptr + 0x18;
  readData(&uAmount, base, current);
  current = ptr + 0x20;
  readData(&tLocation, base, current);
  ptr += 0x38;
}
