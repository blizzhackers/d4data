/**
 * Definition: VisualInventoryMessage
 * Hash: 98cf1807
 */

#include "VisualInventoryMessage.h"

void VisualInventoryMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&tEquipment, base, current);
  ptr += 0x90;
}
