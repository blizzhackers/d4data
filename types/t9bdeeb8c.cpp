/**
 * Definition: t9bdeeb8c
 * Hash: 9bdeeb8c
 */

#include "t9bdeeb8c.h"

void t9bdeeb8c::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&arEquipmentDyes, base, current);
  current = ptr + 0x10;
  readData(&nHairColor, base, current);
  current = ptr + 0x14;
  readData(&nSkinColor, base, current);
  ptr += 0x18;
}
