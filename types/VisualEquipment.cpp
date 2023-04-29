/**
 * Definition: VisualEquipment
 * Hash: 44e4708c
 */

#include "VisualEquipment.h"

void VisualEquipment::read(const char* base, char* &ptr) {
  readData(&tVisualItem, base, ptr);
}
