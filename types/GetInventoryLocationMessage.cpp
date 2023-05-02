/**
 * Definition: GetInventoryLocationMessage
 * Hash: b8d6792c
 */

#include "GetInventoryLocationMessage.h"

void GetInventoryLocationMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x18;
  readData(&tItemId, base, current);
  ptr += 0x28;
}
