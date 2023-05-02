/**
 * Definition: VisualEquipment
 * Hash: 44e4708c
 */

#include "VisualEquipment.h"

void VisualEquipment::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tVisualItem, base, current);
  ptr += 0x78;
}
