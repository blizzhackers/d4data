/**
 * Definition: InventoryImages
 * Hash: d92968e4
 */

#include "InventoryImages.h"

void InventoryImages::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&hDefaultImage, base, current);
  current = ptr + 0x4;
  readData(&hFemaleImage, base, current);
  ptr += 0x8;
}
