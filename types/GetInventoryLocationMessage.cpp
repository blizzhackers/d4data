/**
 * Definition: GetInventoryLocationMessage
 * Hash: b8d6792c
 */

#include "GetInventoryLocationMessage.h"

void GetInventoryLocationMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&tItemId, base, ptr);
}
