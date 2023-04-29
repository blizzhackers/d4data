/**
 * Definition: InventoryRequestSocketMessage
 * Hash: 5cd799e5
 */

#include "InventoryRequestSocketMessage.h"

void InventoryRequestSocketMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_2d5ac18, base, ptr);
  readData(&unk_fa7e312, base, ptr);
  readData(&unk_490e4ef, base, ptr);
}
