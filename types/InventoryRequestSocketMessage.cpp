/**
 * Definition: InventoryRequestSocketMessage
 * Hash: 5cd799e5
 */

#include "InventoryRequestSocketMessage.h"

void InventoryRequestSocketMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_2d5ac18, base, current);
  current = ptr + 0x18;
  readData(&unk_fa7e312, base, current);
  current = ptr + 0x20;
  readData(&unk_490e4ef, base, current);
  ptr += 0x28;
}
