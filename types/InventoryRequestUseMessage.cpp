/**
 * Definition: InventoryRequestUseMessage
 * Hash: 48d47349
 */

#include "InventoryRequestUseMessage.h"

void InventoryRequestUseMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&annItemToUse, base, current);
  current = ptr + 0x18;
  readData(&snoItem, base, current);
  current = ptr + 0x1c;
  readData(&eType, base, current);
  current = ptr + 0x20;
  readData(&annTarget, base, current);
  current = ptr + 0x28;
  readData(&tPlace, base, current);
  ptr += 0x3c;
}
