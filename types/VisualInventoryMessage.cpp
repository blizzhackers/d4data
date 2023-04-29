/**
 * Definition: VisualInventoryMessage
 * Hash: 98cf1807
 */

#include "VisualInventoryMessage.h"

void VisualInventoryMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&tEquipment, base, ptr);
}
